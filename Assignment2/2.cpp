#include <iostream>
#include <fstream>
#include <vector>
/*
* Onur (Honor) Onel
* Student Number: 0865803
* Student Email: onuronel@trentu.ca
* Date: 2025-02-09
*
* Part 2
* Create a file, input.txt and type the following 8 integers in it: 4 4 4 4 4 4 4 4. Save the file and exit.
* Now, run your program and when the program asks for the input file, type input.txt.
*/
using namespace std;

int main()
{
    ifstream inputFile; // Input file stream to read data from a file
    string fileName; // Variable to store the name of the input file

    int num = 0, sum = 0, squareSum = 0; // Variables to store current number, sum, and sum of squares
    vector<int> numbers; // Vector to store all the numbers read from the file

    // Ask user to enter the name of the input file
    cout << "Please enter the file name: ";
    cin >> fileName; // Read the file name from user input

    // Open the input file
    inputFile.open(fileName);
    if (!inputFile)
    {
        // If the input file could not be opened, display an error message and exit
        cout << "Error: Input file could not be opened." << endl;
        return 1; // Exit the program with an error code
    }

    // Read numbers from the file until the end of the file is reached
    while (inputFile >> num)
    {
        numbers.push_back(num); // Add each number read from the file to the vector
    }

    // Check if the vector is empty
    if (numbers.empty())
    {
        cout << "Error: Input file is empty." << endl; // Display error message if no data is found
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
        squareSum += numbers[i] * numbers[i]; // Adds the square of the numbers to the sum of squares
    }

    cout << "\nSum of squares: " << squareSum; // Display the correct sum of squares

    return 0;
}
