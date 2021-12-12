#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;

    char answer = 'Y';

    while (answer == 'Y')
    {
        cout << "Enter number:"; cin >> number;
        sum += number;
        cout << "Do you want to add another number? Y/N:"; cin >> answer;
    }
    cout << "The summation of the numbers is: " << sum << endl;
    return 0;
}