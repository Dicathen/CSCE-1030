#include <iostream>
using namespace std;

int main()
{
    string str;
    char ch;
    bool found = false;

    cout << "Enter string:"; getline(cin,str);
    for (int i = 0; i < str.length(); ++i)
    {
        if(isupper(str.at(i)))
        {
            cout << "Uppercase character found" << endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout <<"There are no uppercase characters." << endl;
    }
}