#include <iostream>
using namespace std;

void isPassing(int score, int threshold)
{
    if (score >= threshold)
    {
        cout << "This score is passing." << endl;
    }
    else cout << "This score is not passing." << endl;
}

int main()
{
    isPassing(40, 60);
    return 0;
}