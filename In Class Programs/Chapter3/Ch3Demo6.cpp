#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Enter letter grade:"; cin >> letter;
    switch (letter)
    {
        case 'a':
        case 'A':
            cout << "Excellent grade." << endl;
            break;
        case 'B':
            cout << "Good grade." << endl;
            break;
        case 'C':
            cout << "Passing grade." << endl;
            break;
        case 'D':
            cout << "Try again next time." << endl;
            break;
        case 'F':
            cout << "Failing grade." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
            break;

    }

    return 0;
}