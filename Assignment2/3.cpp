#include <iostream>
#include <fstream>
#include <vector>
/*
* Onur (Honor) Onel
* Student Number: 0865803
* Student Email: onuronel@trentu.ca
* Date: 2025-02-09
*
* Part 3
* Modify the program such that the program writes the output to a file called output.txt, instead of
* displaying it.
*/
using namespace std;

int main()
{
    ifstream inputFile; // Input file stream to read data from a file
    ofstream outputFile; // Output file stream to write data to a file
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
        inputFile.close(); // Close the input file
        return 1; // Exit the program with an error code
    }

    // Close the input file after reading all numbers
    inputFile.close();

    // Open the output file "output.txt" for writing the results
    outputFile.open("output.txt");
    if (!outputFile)
    {
        // If the output file could not be opened, display an error message and exit
        cout << "Error: Output file could not be opened." << endl;
        return 1; // Exit the program with an error code
    }

    outputFile << "The numbers are: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        outputFile << numbers[i] << " "; // Write each number to the output file
        sum += numbers[i]; // Add each number to the sum
    }

    int avg = sum / numbers.size(); // Calculate the average of the numbers
    outputFile << "\nAverage of the numbers: " << avg; // Write the average to the output file

    // Write the square of each number and calculate the sum of squares
    outputFile << "\nSquare of the numbers: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        outputFile << numbers[i] * numbers[i] << " "; // Write the square of each number to the output file
        squareSum += numbers[i] * numbers[i]; // Add the square of each number to the sum of squares
    }

    outputFile << "\nSum of squares: " << squareSum; // Write the sum of squares to the output file

    outputFile.close(); // Close the output file after writing the data

    return 0; // End of the program
}
