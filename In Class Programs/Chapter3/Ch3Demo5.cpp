#include <iostream>
using namespace std;

int main()
{
    bool my_bool = false;
    int my_int = my_bool;
    int x = -10, y = 25;
    char ch = '*';

    if (my_bool)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    if (1)
    {
        cout << "true" << endl;
    }
    my_bool = 26;
    if (my_bool) cout << "true" << endl;
    return 0;
}
