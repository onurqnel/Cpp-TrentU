#include <iostream>
/*
 * Onur Onel
 * Student Number: 0865803
 * Student Email: onuronel@trentu.ca
 * Date: 2025-03-07
 *
 * Friend Function:
 * - A friend function is not a member of a class, but it can access the class's private and protected members.
 * - This is useful when we want a function to work closely with the class data without being a member.
 * - In this program, the friend function "isGreater" compares two Rational objects by accessing their private data.
 */
using namespace std;

// Represents a rational number as a fraction
class Rational
{
    int numerator; // Stores the numerator of the fraction, private by default.
    int denominator; // Stores the denominator of the fraction, private by default.

public:
    // Constructor with default values. It sets the numerator and denominator.
    // If no values are provided, the rational number defaults to 0/1 (0).
    Rational(const int n = 0, const int d = 1) : numerator(n), denominator(d)
    {
        // Check if the denominator is zero to avoid division by zero
        if (d == 0)
        {
            cout << "Error: Denominator cannot be zero." << endl;
            exit(1); // Exit the program if the denominator is zero
        }
    }

    // Declare a friend function that can access private members
    // This function will compare two Rational objects
    friend bool isGreater(const Rational& r1, const Rational& r2);

    // Function to display the rational number in the format "numerator/denominator"
    void display() const
    {
        cout << numerator << "/" << denominator;
    }
};

// Define the friend function that compares two Rational objects
bool isGreater(const Rational& r1, const Rational& r2)
{
    // Multiply across the fractions and compare the products
    return r1.numerator * r2.denominator > r2.numerator * r1.denominator;
}

int main()
{
    // Create two constant Rational objects with given numerators and denominators
    const Rational r1(3, 4); // Represents the rational number 3/4
    const Rational r2(2, 3); // Represents the rational number 2/3

    // Output the first rational number
    cout << "Rational 1: ";
    r1.display();

    // Output the second rational number
    cout << "\nRational 2: ";
    r2.display();

    // Use the friend function to compare the two Rational numbers and display the result
    if (isGreater(r1, r2))
    {
        cout << "\nRational 1 is greater than Rational 2." << endl;
    }
    else
    {
        cout << "Rational 2 is greater than or equal to Rational 1." << endl;
    }

    return 0;
}
