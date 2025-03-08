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
    student student1, student2; // Creating two student objects

    // Reading and displaying details for student 1
    cout << "Enter details for student 1" << endl;
    student1.read_data();

    // Reading and displaying details for student 2
    cout << "\nEnter details for student 2" << endl;
    student2.read_data();

    // Displaying the details of student 1
    cout << "\nDisplaying student 1 details:";
    student1.display_data();

    // Displaying the details of student 2
    cout << "\nDisplaying student 2 details:";
    student2.display_data();

    return 0;
}
