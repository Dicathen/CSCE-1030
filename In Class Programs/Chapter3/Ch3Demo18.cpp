#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 20;
    if (x>y)
    {
        cout << "x is greater than y" << endl;

    }
    else
    {
        cout << "x IS NOT greater than y" << endl;
    }
    x > y ? cout << "x is greater than y" << endl : cout << "y IS NOT greater than x" << endl;
    return 0;
}