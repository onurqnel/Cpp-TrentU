#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Mammal
{
protected:
    string address = "N/A";

public:
    bool tail = false;
    int id = 0;
    double weight = 0;
    int numOfAppendages = 0;
    string name = "N/A";
    string species = "unknown";
    int age = 0;

    Mammal()
    {
        id = 1;
        weight = 10;
        numOfAppendages = 4;
        name = "No Name";
        age = 1;
    }
    Mammal(string Name, string Type, int Age, int Appendages, double Weight, int ID)
    {
        name = Name;
        species = Type;
        age = Age;
        numOfAppendages = Appendages;
        weight = Weight;
        id = ID;
    }
    void printType()
    {
        cout << "I am an object of type Mammal" << endl;
    }
    virtual void printInfo()
    {
        cout << "Hello my name is " << name << " and I am a " << age << " year old " << species << "\n";
    }
};
class Cat : public Mammal
{
public:
    const string species = "Cat";
    const bool tail = true;
    bool adopted = false;
    string breed = "Tabby";
    string favFood = "N/A";

    Cat()
    {
        address = "stray";
    }
    // complete constructor, with initializer list for constants
    Cat(string Name, int Age, int Appendages, double Weight, int ID, string Breed, string Food) : species("Cat"), tail(true)
    {
        name = Name;
        age = Age;
        numOfAppendages = Appendages;
        weight = Weight;
        id = ID;
        breed = Breed;
        favFood = Food;
    }
    void printType()
    {
        cout << "I am an object of type Cat" << endl;
    }

};
int main()
{

    Cat Mittens("MR.Mittens", 3, 4, 7, 1, "Tabby", "Fish");
    Mittens.printInfo();
    Mittens.printType();


}