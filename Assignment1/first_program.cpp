#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    const double BOTTLE_PRICE = 0.22;
    const int YEAR_DAYS = 365;
    int yearlySoldCases;
    int yearlySoldBottles;

    cout << "Enter the total number of cases sold this year: " << endl;
    cin >> yearlySoldCases;

    cout << "Enter the total number of individual bottles sold this year: " << endl;
    cin >> yearlySoldBottles;

    // Calculate total bottles sold
    int yearlyTotalBottles = (yearlySoldCases * 12) + yearlySoldBottles;

    // Calculate yearly and daily profit
    double yearlyProfit = yearlyTotalBottles * BOTTLE_PRICE;
    double dailyProfitMean = yearlyProfit / YEAR_DAYS;

    // Display results with fixed precision
    cout << fixed << setprecision(2);
    cout << "Total profit for the year: $" << yearlyProfit << endl;
    cout << "Average daily profit: $" << dailyProfitMean << endl;

    return 0;
}
