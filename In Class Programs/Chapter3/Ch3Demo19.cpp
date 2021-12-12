#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = 2, y = 3;
    if (fabs(x/y - 0.666) < 1e5)
    {
        cout << "do something." << endl;
    }
    else
    {
        cout << "do something else." << endl;
    }
    return 0;
}