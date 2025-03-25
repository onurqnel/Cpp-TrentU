#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& v1, T& v2)
{
    T temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}

template <typename T>
void outputAnyValue(T& value)
{
    cout << value << endl;
}

int main()
{
    int a = 10;
    int b = 20;
    swapValues(a, b);
    cout << a << endl;
    cout << b << endl;

    string val1 = "abc";
    string val2 = "def";
    swapValues(val1, val2);
    outputAnyValue(val1);
    outputAnyValue(val2);

    /*cout << "Please enter a number for the value of x -> 100/x : ";
    int x = 1;
    cin >> x;
    try
    {
        if (x == 0)
        {
            throw invalid_argument("Cannot divide by zero");
        }
        cout << "The new value is -> " << 100 / x << endl;
    }
    catch (const invalid_argument& e)
    {
        cout << "Exception: " << e.what();
    }

    try
    {
        int age;
        cout << "Enter your age: ";
        cin >> age;

        if (cin.fail())
        {
            throw invalid_argument("Invalid input. Please enter a numeric value.");
        }


        if (age < 0)
        {
            throw out_of_range("Age cannot be negative.");
        }

        if (age < 18)
        {
            throw runtime_error("You must be at least 18 years old.");
        }

        cout << "You are eligible!" << endl;
    }
    catch (const invalid_argument& e)
    {
        cout << "Exception: " << e.what();
    }
    catch (const out_of_range& e)
    {
        cout << "Exception: " << e.what();
    }
    catch (const runtime_error& e)
    {
        cout << "Exception: " << e.what();
    }*/
}
