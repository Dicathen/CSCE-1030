#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2;
    cout << "Enter String: "; cin >> str2;
    cout << endl;

    int x, y;

    if (str1 == str2)
    {
        cout << "They are equal." << endl;
    }
    else
    {
        cout << "They are not equal." << endl;
        if (str1 > str2)
        {
            cout << "str1 is bigger." << endl;
        }
        else cout << "str2 is bigger." << endl;
    }
    return 0;
}
