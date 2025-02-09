#include <iostream>
#include <fstream>
#include <vector>
/*
* Onur (Honor) Onel
* Student Number: 0865803
* Student Email: onuronel@trentu.ca
* Date: 2025-02-02
*
* Part 1
* Write a C++ program that reads a file containing some integer values.
* It displays the number, the number to the power of two, and the sum up to that point.
* At last, it displays the average of these numbers.
*/

using namespace std;

int main()
{
    ifstream inputFile; // Input file stream to read data from a file
    int num = 0, sum = 0, squareSum = 0; // Variables to store current number, sum, and sum of squares
    vector<int> numbers; // Vector to store all the numbers read from the file

    inputFile.open("input.txt"); // Open the input file
    while (inputFile >> num)
    {
        numbers.push_back(num); // Add each number read from the file to the vector
    }
    // Check if the vector is empty
    if (numbers.empty())
    {
        cout << "Error: Input file is empty." << endl;
        inputFile.close(); // Close the file
        return 1; // Exit the program with an error code
    }
    // Close the input file after reading all numbers
    inputFile.close();

    cout << "The numbers are: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " "; // Display each number
        sum += numbers[i]; // Add each number to the sum
    }
    int avg = sum / numbers.size(); // Calculate the average of the numbers
    cout << "\nAverage of the numbers: " << avg; // Display the average

    // Display the square of each number and calculate the sum of squares
    cout << "\nSquare of the numbers: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] * numbers[i] << " "; // Prints the square of the numbers
        squareSum += numbers[i] * numbers[i]; // Adds the square of the numbers to the sum
    }
    cout << "\nSum of squares: " << squareSum; // Display the correct sum of squares

    return 0;
}
