#include <iostream>
/*
 * Onur Onel
 * Student Number: 0865803
 * Student Email: onuronel@trentu.ca
 * Date: 2025-03-07
 *
 * What is data hiding? How do you achieve data hiding in C++?
 *
 * Data hiding is a key aspect of encapsulation in object-oriented programming.
 * It involves restricting direct access and only allowing through a controlled member function.
 * In C++, data hiding is typically achieved by declaring data members as private
 * or protected and providing public member functions to safely manipulate that data.
 */
using namespace std;

// This class represents a simple bank account with basic functionalities such as deposit, withdrawal, and balance display.
class BankAccount
{
    double balance; // Private data member, hidden from external access!

public:
    // Constructor to initialize balance to 0
    BankAccount() : balance(0.0){}

    // Public member function to deposit money
    void deposit(const double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }

    // Public member function to withdraw money
    void withdraw(const double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient funds" << endl;
        }
    }

    // Public member function to display the current balance
    void displayBalance() const
    {
        cout << "Current balance: $" << balance << endl;
    }
};

int main()
{
    BankAccount account;
    account.deposit(1000.0); // Deposit money into the account
    account.withdraw(200.0); // Withdraw money from the account
    account.displayBalance(); // Display the current balance
    return 0;
}
