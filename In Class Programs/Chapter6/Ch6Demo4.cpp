#include <iostream>
using namespace std;

bool compare(string str, int length)
{
    return length == str.length();
}

int main()
{
    string str = "This is a test.";
    int length = 10;
    bool isEqual = compare(str, length);
    if(isEqual)
    {
        cout << "It is of the same size." << endl;
    }
    else cout << "It is not of the same size." << endl;
    return 0;

}