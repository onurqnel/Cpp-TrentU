#include <iostream>  // Required for input/output operations
/*
 * Onur (Honor) Onel
 * Student Number: 0865803
 * Student Email: onuronel@trentu.ca
 * Date: 2025-01-27
 *
 * Program Description:
 * This program demonstrates a simple swap function that exchanges the values
 * of two integers using reference variables. The program prompts the user to
 * input two integers, swaps their values using the swap function, and then
 * displays the results.
 *
 * Data Dictionary:
 * firstNumber (int): The first number input by the user.
 * secondNumber (int): The second number input by the user.
 * temp (int): A temporary variable used in the swap function to store the value of one variable during the swap.
 */

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
