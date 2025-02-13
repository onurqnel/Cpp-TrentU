#include <iostream>  // Required module for input/output operations
#include <iomanip>   // Required module for formatting output
/*
 * Onur (Honor) Onel
 * Student Number: 0865803
 * Student Email: onuronel@trentu.ca
 * Date: 2025-01-27
 *
 * Program Description:
 * This program calculates the daily, yearly, and 10-year profits
 * based on the number of bottles sold in a single day. The program
 * prompts the user to enter the number of bottles sold, then uses
 * predefined constants for bottle price and days in a year to compute
 * the required profits.
 *
 * Data Dictionary:
 * BOTTLE_PRICE (double): The price of one bottle.
 * YEAR (int): The number of days in a year (365).
 * soldBottles (int): The number of bottles sold on the current day (input by the user).
 * dailyProfit (double): The profit made in a single day.
 * yearlyProfit (double): The profit made in one year (365 days).
 * tenYearlyProfit (double): The profit made over 10 years.
 */
using namespace std; // Allows use of standard library without the std:: prefix

int main()
{
     const double BOTTLE_PRICE = 0.22; // Price per bottle
     const int YEAR = 365; // Number of days in a year
     int soldBottles; // Variable to store the number of bottles sold

     // Ask user for the total number of bottles sold
     cout << "Enter the total number of bottles sold today: " << endl;
     cin >> soldBottles;

     // Check if the input is valid
     if (soldBottles <= 0)
     {
          // Output error message if the input is invalid
          cout << "Please enter positive number" << endl;
     }
     else
     {
          // Calculate profits based on the number of bottles sold
          double dailyProfit = soldBottles * BOTTLE_PRICE; // Profit for a single day
          double yearlyProfit = dailyProfit * YEAR; // Profit for a year
          double tenYearlyProfit = yearlyProfit * 10; // Profit for 10 years

          // Configure output to show two decimal places
          cout << fixed << setprecision(2);

          // Display daily, yearly, and 10-year profits
          cout << "You have sold: " << soldBottles << " bottles"
               << " and today's profit is: $" << dailyProfit << endl;
          cout << "You have sold: " << soldBottles * YEAR << " bottles"
               << " the yearly profit is: $" << yearlyProfit << endl;
          cout << "You have sold: " << soldBottles * 10 * YEAR << " bottles"
               << " the 10 yearly profit is: $" << tenYearlyProfit << endl;
     }
     return 0; // Indicate successful program termination
}
