#include <iostream>
using namespace std;

int main()
{
    int count =  0;
    while (count < 5)
    {
        cout << "Hello" << endl;
        count++;
    }

    for (int i = -12; i <= 28 ; i+=2)
    {
        cout << i << endl;
    }

    for (int i = 12; i >= -8; --i) {
        cout << i << endl;
    }

}