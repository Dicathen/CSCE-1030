#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character: "; cin >> ch;

    if (isalpha(ch))
    {
        cout << "You entered an letter." << endl;
        if (isupper(ch))
        {
            cout << "You entered an uppercase character." << endl;

        }
        else
        {
            cout << "You entered a lowercase character." << endl;
        }
    }
    else if (isdigit(ch))
    {
        cout << "You entered a digit." << endl;
    }
    else if (isspace(ch))
    {
        cout << "You entered a whitespace." << endl;
    }
    else
    {
        cout << "You entered a special character." << endl;
    }
    return 0;
}
