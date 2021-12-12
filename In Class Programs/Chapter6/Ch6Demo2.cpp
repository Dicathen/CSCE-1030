#include <iostream>
using namespace std;

void add5( int num)
{
    int result = num + 5;
    cout << "Result: " << result << endl;
}

int main()
{
    int num;
    cout <<"Enter number:";  cin >> num;
    add5(num);
    return 0;
}
