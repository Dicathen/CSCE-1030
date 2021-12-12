#include <iostream>
using namespace std;

int main()
{

    int sum = 0;

    for (int i = 1; i <= 10 ; ++i)
    {
        int temp;
        cout << "Enter number:"; cin >> temp;
        sum += temp;
    }
    cout << "The summation of the 10 numbers is: " << sum << endl;
    return 0;
}