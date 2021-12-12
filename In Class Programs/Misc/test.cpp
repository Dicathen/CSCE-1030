// This program is designed to take in a dollar amount and convert it into various global currencies.

#include <iostream>

using namespace std;

int main()
{
    double dollarAmount, yenAmount, euroAmount, pesoAmount;

    // Asks for the given amount of dollars to convert into various global currencies.
    cout << "Enter the amount in dollars" << endl;
    cin >> dollarAmount;

    // Calculates the amount of various global currencies from the previous dollar amount.
    yenAmount = dollarAmount * 113.27;
    euroAmount = dollarAmount * 0.84;
    pesoAmount = dollarAmount * 19.73;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // Outputs a table of every related currency.
    cout.width(15);
    cout << "Dollars";
    cout.width(15);
    cout << "Yen";
    cout.width(15);
    cout << "Euros";
    cout.width(15);
    cout << "Pesos" << endl;
    cout.width(15);
    cout << dollarAmount;
    cout.width(15);
    cout << yenAmount;
    cout.width(15);
    cout << euroAmount;
    cout.width(15);
    cout << pesoAmount << endl; // {SPACING?}

    return 0;
}