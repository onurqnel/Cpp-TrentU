#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    double grade, sum = 0;
    int gradeCount = 0;
    string name;

    ifstream fileIn("students.txt");
    if (fileIn.fail())
    {
        cout << "Input file opening failed.\n" << endl;
        exit(1);
    }
    ofstream fileOut("grades.csv");
    if (fileOut.fail())
    {
        cout << "Output file opening failed.\n" << endl;
        exit(1);
    }
    fileOut << "Name,Grade" << endl;

    while (getline(fileIn, name))
    {
        do
        {
            cout << "Enter the grade for " << name << " (0-100): ";
            cin >> grade;
            if (grade < 0 || grade > 100)
            {
                cout << "Invalid grade. Please enter a grade between 0 and 100." << endl;
            }
        }
        while (grade < 0 || grade > 100);
        sum += grade;
        gradeCount++;
        fileOut << name << "," << grade << endl;
    }

    if (gradeCount > 0)
    {
        double average = 0;
        average = sum / gradeCount;
        cout << "The average grade of all students is: " << average << endl;
        cout << "Number of students processed: " << gradeCount << endl;
    }
    else
    {
        cout << "No grades were entered." << endl;
    }

    fileIn.close();
    fileOut.close();

    return 0;
}
