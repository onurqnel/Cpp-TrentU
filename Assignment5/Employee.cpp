#include <iostream>
#include <fstream>

/*
* Onur Onel
* Student Number: 0865803
* Student Email: onuronel@trentu.ca
* Date: 2025-03-30
*
* Description:
* This program manages employee records using a singly linked list sorted by salary in descending order.
* It allows insertion, deletion by ID, and displaying of employee data.
* Records can be added manually or read from "EmployeeList.txt".
*/

using namespace std;

// Definition of the Employee structure
struct Employee
{
    string firstName;
    string lastName;
    string phoneNumber;
    int ID;
    int salary;
    Employee* next;

    // Constructor initializing all member variables
    Employee(const string& fName, const string& lName, const string& phone, const int id, const int sal)
        : firstName(fName), lastName(lName), phoneNumber(phone), ID(id), salary(sal), next(nullptr)
    {
    }
};

// Class to manage a linked list of Employee objects
class EmployeeList
{
    Employee* head; // Pointer to the head of the list

public:
    // Constructor initializing the head to nullptr
    EmployeeList()
    {
        head = nullptr;
    }

    // Insert a new employee into the list in descending order of salary
    void insertEmployee(Employee* newEmployee)
    {
        // Insert at head if a list is empty or new salary is greater than head's
        if (head == nullptr || newEmployee->salary > head->salary)
        {
            newEmployee->next = head;
            head = newEmployee;
            return;
        }

        // Traverse to find the correct position based on salary
        Employee* current = head;
        while (current->next != nullptr && current->next->salary >= newEmployee->salary)
        {
            current = current->next;
        }

        // Insert the new employee
        newEmployee->next = current->next;
        current->next = newEmployee;
    }

    // Delete an employee from the list by their ID
    void deleteEmployeeByID(const int id)
    {
        Employee* current = head;
        Employee* previous = nullptr;

        // Search for the employee with the given ID
        while (current && current->ID != id)
        {
            previous = current;
            current = current->next;
        }

        // If not found, display a message
        if (!current)
        {
            cout << "Employee not found." << endl;
            return;
        }

        // If the employee to delete is the head
        if (!previous)
            head = current->next;
        else
            previous->next = current->next;

        delete current;
        cout << "\nEmployee with ID: " << id << " deleted." << endl;
    }

    // Print the entire employee list
    void printList() const
    {
        const Employee* current = head;
        while (current)
        {
            cout << current->firstName << " " << current->lastName
                << ", ID: " << current->ID
                << ", Phone: " << current->phoneNumber
                << ", Salary: " << current->salary << endl;
            current = current->next;
        }
    }
};

int main()
{
    EmployeeList linkedList;

    // Creating and inserting three employee objects
    Employee* emp1 = new Employee("Carpenter", "Wood", "222-222-2222", 333556666, 40000);
    Employee* emp2 = new Employee("Iron", "Ironman", "828-888-8888", 444444443, 73000);
    Employee* emp3 = new Employee("Martin", "Goal-keeper", "888-666-8888", 777777777, 86000);

    linkedList.insertEmployee(emp1);
    linkedList.insertEmployee(emp2);
    linkedList.insertEmployee(emp3);

    // Open employee list from a file
    ifstream inputFile("EmployeeList.txt");

    if (!inputFile)
    {
        cout << "Error: Input file could not be opened." << endl;
        return 1;
    }

    // Read and parse each line to extract employee data
    string line;
    while (getline(inputFile, line))
    {
        int pos = 0;
        int nextPos = line.find(',');

        string lastName = line.substr(pos, nextPos - pos);
        pos = nextPos + 1;

        nextPos = line.find(',', pos);
        string firstName = line.substr(pos, nextPos - pos);
        pos = nextPos + 1;

        nextPos = line.find(',', pos);
        int ID = stoi(line.substr(pos, nextPos - pos));
        pos = nextPos + 1;

        nextPos = line.find(',', pos);
        string phone = line.substr(pos, nextPos - pos);
        pos = nextPos + 1;

        int salary = stoi(line.substr(pos));

        // Create and insert an employee object
        Employee* emp = new Employee(firstName, lastName, phone, ID, salary);
        linkedList.insertEmployee(emp);
    }

    // Close the input file
    inputFile.close();

    // Print the full employee list
    linkedList.printList();

    // Delete an employee by ID and print the updated list
    linkedList.deleteEmployeeByID(444444444);
    cout << endl;
    linkedList.printList();

    return 0;
}
