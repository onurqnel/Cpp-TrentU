#include <iostream>
#include <string>
/*
 * Onur Onel
 * Student Number: 0865803
 * Student Email: onuronel@trentu.ca
 * Date: 2025-03-07
 *
 * Why Prefer Classes to Structures?
 * - Classes provide better control over internal data by preventing external code from directly
 *   modifying or accessing internal details. This reduces potential bugs, makes the program safer.
 *
 * - Using classes makes it easier to update and improve internal logic without affecting external code.
 *   Changes made inside a class won't break existing code that uses the classes.
 *
 * - Classes clearly communicate the intention that the type includes both data and behavior
 *   This helps other developers understand source code easily.
 */
using namespace std;
/*
 *   Structures:
 *   - All members are public by default.
 *   - Ideal for simple data containers.
 *   - Does not enforce encapsulation, data is directly accessible.
 */
struct PersonStruct
{
    string name; // Public by default: can be accessed or modified directly.
    int age; // Public by default: initialized to 0 if not explicitly set.

    // Available publicly to display the person's details.
    void display() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

/*
 *   Classes:
 *   - All members are private by default, ensuring encapsulation.
 *   - Preferred when we need to protect internal data and control its access.
 *   - Data is hidden and only accessible through public member functions.
 */
class PersonClass
{
    string name; // Private by default.
    int age; // Private by default.

public:
    // Constructor initializes the private members.
    PersonClass(const string& name, const int age) : name(name), age(age){}

    // Public member function to display the person's details.
    void display() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Getter for the private 'name' variable.
    string getName() const
    {
        return name;
    }

    // Getter for the private 'age' variable.
    int getAge() const
    {
        return age;
    }
};

int main()
{
    /*
     *  Since all members of PersonStruct are public,
     *  we can directly access and modify them.
     */
    PersonStruct personStruct;
    personStruct.name = "Onur"; // Direct assignment is allowed.
    personStruct.age = 30; // Direct assignment is allowed.
    cout << "Using structure:" << endl;
    personStruct.display(); // Calls the display() method.

    /*
     *  With PersonClass, data is encapsulated.
     *  Members can only be set through the constructor or
     *  accessed via public member functions.
     *  This provides better control and data protection.
     */
    const PersonClass personClass("Onel", 25); // Object initialization with constructor.
    cout << "Using class:" << endl;
    personClass.display(); // Calls the display() method, direct access to members is not allowed.

    return 0;
}
