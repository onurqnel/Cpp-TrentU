#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // Declares a string (array of characters) and stores 'Lab 1'
    char lab[] = "Lab 1";
    // Declares a double and stores '88.12'
    double grade = 88.12;
    // Declares a character and stores 'T'
    char letter = 'T';
    // Declares a string and stores an empty string ' "" '
    string name;

    // outputs a welcome message
    cout << "Welcome to COIS 2040 " << lab << " \n";

    // prompts the user for their name
    cout << "Please enter your name: ";

    // Takes whole user input line and stores it in variable 'name'
    getline(cin, name);

    //std::cout.setf(std::ios::fixed);
    //std::cout.precision(0);
    cout << fixed << setprecision(0) << "Hello my name is " << name << " my grade is " << grade <<
        " and the first letter of Trent is " <<
        letter << "\n";

    for (int i = 0; i <= 10; i++)
    {
        cout << i << "\n";
    }
    int num;
    int total = 0;
    do
    {
        cout << "Please enter a positive number: ";
        cin >> num;

        if (num < 0)
        {
            break;
        }
        if (num % 2 == 0)
        {
            total += num;
        }
        else
        {
            total -= num;
        }
    }
    while (num >= 0);
    cout << "You entered negative number, goodbye!" << endl;
    cout << "The total is: " << total;
}
