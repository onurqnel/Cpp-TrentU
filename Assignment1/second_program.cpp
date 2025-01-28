#include <iostream>  // Required for input/output operations

using namespace std;

// Function to swap two numbers using reference parameters
int swap(int &a, int &b)
{
    int temp = a; // Store the value of 'a' in a temporary variable
    a = b;        // Assign the value of 'b' to 'a'
    b = temp;     // Assign the value of 'temp' (original 'a') to 'b'
    return 0;
}

int main()
{
    int firstNumber, secondNumber; // Variables to store the two numbers entered by the user

    // Prompt the user for the first number
    cout << "Enter first number: ";
    cin >> firstNumber;

    // Prompt the user for the second number
    cout << "Enter second number: ";
    cin >> secondNumber;

    // Call the swap function to exchange the values of the two numbers
    swap(firstNumber, secondNumber);

    // Display the results after swapping
    cout << "\nNumbers has been swapped...\n" << endl;
    cout << "The first number becomes: " << firstNumber << endl;
    cout << "The second number becomes: " << secondNumber << endl;

    return 0;
}
