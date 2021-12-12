#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 2; j >= -2 ; --j)
        {
            cout << "i = " << i << " | " << "j = " << j << endl;
        }
    }
    return 0;
}
