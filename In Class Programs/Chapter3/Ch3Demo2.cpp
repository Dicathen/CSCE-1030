#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The number " << num << " is even." << endl;
        if (num % 5 ==0)
        {
            cout << "The number " << num << " is divisible by 5" << endl;
        }
    }

    else
    {
        cout << "The number " << num << " is odd." << endl;
    }
    return 0;
}
