/*
* Onur Onel
* Student Number: 0865803
* Student Email: onuronel@trentu.ca
* Date: 2025-03-19
*
* Description:
* This source file implements the EvenNumber class, which represents an even integer.
* It includes constructors to initialize the value, methods to retrieve the current value,
* and functions to find the next and previous even numbers.
*/

#include <iostream>
#include "EvenNumber.h"

using namespace std;

/*
 * Default Constructor Initializes the value to 0 by default.
 */
EvenNumber::EvenNumber()
{
    value = 0;
}

/*
 * Parameterized Constructor.Initializes the value to the specified even integer.
 * If an odd number is passed, it adjusts the value to the next even number.
 */
EvenNumber::EvenNumber(const int val)
{
    if (val % 2 == 0)
    {
        value = val; // If the input is even, store it as is.
    }
    else
    {
        value = val + 1; // If the input is odd, adjust to the next even number.
    }
}

/*
 * Returns the current even number stored in the object.
 */
int EvenNumber::getValue() const
{
    return value;
}

/*
 * Returns an EvenNumber object that represents the next even number
 * after the current one.
 */
EvenNumber EvenNumber::getNext() const
{
    return EvenNumber(value + 2); // The next even number is always +2.
}

/*
 * Returns an EvenNumber object that represents the previous even number
 * before the current one.
 */
EvenNumber EvenNumber::getPrevious() const
{
    return EvenNumber(value - 2); // The previous even number is always -2.
}

/*
 * The Main function demonstrates the functionality of the EvenNumber class
 * by creating objects, retrieving values, and computing the next and
 * previous even numbers.
 */
int main()
{
    // Create an EvenNumber object using the default constructor
    const EvenNumber num1;
    cout << "Default Even Number: " << num1.getValue() << endl;

    // Create an EvenNumber object initialized with an even value
    const EvenNumber num2(16);
    cout << "Created Even Number: " << num2.getValue() << endl;

    // Create an EvenNumber object initialized with an odd value
    const EvenNumber num3(9);
    cout << "Created Even Number from odd input: " << num3.getValue() << endl;

    // Display the next and previous even numbers
    cout << "Next Even Number after " << num2.getValue() << " is " << num2.getNext().getValue() << endl;
    cout << "Previous Even Number before " << num2.getValue() << " is " << num2.getPrevious().getValue() << endl;

    return 0;
}
