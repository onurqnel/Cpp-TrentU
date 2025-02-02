#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    string fileName;
    cout << "Please enter the file name: ";
    cin >> fileName;
    ifstream inputFile(fileName);

    if (!inputFile)
    {
        cout << "Error: Input file could not be opened." << endl;
        return 1;
    }

    int num = 0, sum = 0;
    vector<int> numbers;

    while (inputFile >> num)
    {
        numbers.push_back(num);
    }

    if (numbers.empty())
    {
        cout << "Error: Input file is empty." << endl;
        return 1;
    }
    inputFile.close();

    cout << "\n The numbers are: ";
    for (int val : numbers)
    {
        cout << val << " ";
    }
    cout << "\n Squared numbers: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
        cout << numbers[i] * numbers[i] << " ";
    }
    int avg = sum / numbers.size();
    cout << "\n Average of the numbers: " << avg << endl;

    return 0;
}
