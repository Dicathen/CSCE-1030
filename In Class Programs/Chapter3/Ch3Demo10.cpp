#include <iostream>
using namespace std;

int main()
{
    enum Colors { Red, Blue, Green};
    Colors my_color;
    my_color = Red;

    enum Days { Sunday = 50, Monday, Friday, Saturday};

    Days my_day;

    my_day = Sunday;

    cout << "my_day = " << Monday << endl;

    return 0;
}