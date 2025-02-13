#include <iostream>

using namespace std;

double CalculateAverage(double numberArray[], int arraySize);

int main()
{
    double numbers[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter index " << i << ": ";
        cin >> numbers[i];
    }
    cout << "\nArray: ";
    for (double val : numbers)
    {
        cout << val << " ";
    }
    const double average = CalculateAverage(numbers, 5);
    cout << "\nAverage: " << average << endl;
}

double CalculateAverage(double numberArray[], int arraySize)
{
    double sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        sum += numberArray[i];
    }
    return sum / arraySize;
}
