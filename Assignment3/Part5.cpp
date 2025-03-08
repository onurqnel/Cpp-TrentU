#include <iostream>
/*
 * Onur Onel
 * Student Number: 0865803
 * Student Email: onuronel@trentu.ca
 * Date: 2025-03-07
 */
using namespace std;

// Class representing a student with name, faculty, and student number
class student
{
    char student_name[20] = {}; // Student's name
    char faculty[20] = {}; // Faculty name
    int student_num = 0; // Student's number

public:
    // Function to read student details from the user
    void read_data()
    {
        cout << "Enter student name: ";
        cin.getline(student_name, 20);

        cout << "Enter faculty name: ";
        cin.getline(faculty, 20);

        cout << "Enter student number: ";
        cin >> student_num;
        cin.ignore(); // Clear buffer after reading integer
    }

    // Function to display the details of the student
    void display_data() const
    {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << student_name << endl;
        cout << "Faculty: " << faculty << endl;
        cout << "Student Number: " << student_num << endl;
    }
};

int main()
{
    student students[20]; // Creating an array of 20 student objects

    // Reading details for 20 students
    for (int i = 0; i < 20; ++i)
    {
        cout << "\nEnter details for student " << i + 1 << endl;
        students[i].read_data();
    }

    // Displaying details for 20 students
    for (int i = 0; i < 20; ++i)
    {
        cout << "\nDisplaying details for student " << i + 1 << ":";
        students[i].display_data();
    }

    return 0;
}
