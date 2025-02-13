#include <iostream>
#include <fstream>
#include <vector>
/*
* Onur (Honor) Onel
* Student Number: 0865803
* Student Email: onuronel@trentu.ca
* Date: 2025-02-02
*
* Final Version:
*   This program reads integers from a user-specified input file, computes
*   the sum, average, and squares of the numbers, then writes the results to an output file.
*
* Data Dictionary:
*   - inputFile: ifstream object used to read data from a file.
*   - outputFile: ofstream object used to write data to a file.
*   - numbers: vector to store the list of integers read from the input file.
*   - num: integer variable used to temporarily hold each number from the input.
*   - sum: integer variable to store the sum of the numbers.
*   - squareSum: integer variable to store the sum of the squares of the numbers.
*   - avg: integer variable to store the average of the numbers.
*/
using namespace std;

// Function to set up the input and output file streams
void getStream(ifstream& inputFile, ofstream& outputFile)
{
    string fileName;

    // Ask user to enter the name of the input file
    cout << "Please enter the file name: ";
    cin >> fileName;

    // Open the input file
    inputFile.open(fileName);
    if (!inputFile)
    {
        // If the input file could not be opened, display an error message and exit
        cerr << "Error: Input file could not be opened." << endl;
        exit(1);
    }

    // Open the output file "output.txt"
    outputFile.open("output.txt");
    if (!outputFile)
    {
        // If the output file could not be opened, display an error message and exit
        cerr << "Error: Output file could not be opened." << endl;
        exit(1);
    }
}

int main()
{
    // Declare file stream objects
    ifstream inputFile;
    ofstream outputFile;

    // Initialize file streams using call-by-reference
    getStream(inputFile, outputFile);

    // Declare variables
    int num = 0, sum = 0, squareSum = 0;
    vector<int> numbers;  // Vector to store numbers

    // Read numbers from the input file
    while (inputFile >> num)
    {
        numbers.push_back(num);  // Add each number to the vector
    }

    // Check if the vector is empty
    if (numbers.empty())
    {
        cerr << "Error: Input file is empty." << endl;
        inputFile.close();
        return 1;
    }
    // Close the input file
    inputFile.close();

    // Write into the output file
    outputFile << "The numbers are: ";
    for (int val : numbers)
    {
        outputFile << val << " ";  // Write each number
        sum += val;                // Calculate sum
    }

    // Write the sum to the output file
    outputFile << "\nSum: " << sum;

    // Calculate the average and write to the output file
    int avg = sum / numbers.size();
    outputFile << "\nAverage: " << avg;

    // Write the square of each number and the sum of squares to the output file
    outputFile << "\nSquares: ";
    for (int val : numbers)
    {
        outputFile << val * val << " ";  // Write square of the number
        squareSum += val * val;          // Add square of the number to the square sum
    }
    outputFile << "\nSum of squares: " << squareSum;

    // Inform the user that the results have been saved to the output file
    cout << "Results saved to 'output.txt'" << endl;

    // Close the output file
    outputFile.close();
    return 0;
}
