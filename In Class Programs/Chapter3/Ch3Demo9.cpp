#include <iostream>
using namespace std;

int main()
{
    enum Direction {UP = 'U', DOWN = 'D', LEFT = 'L', RIGHT = 'R'};
    Direction my_dir;
    int  x = 0, y = 0;
    char dir;

    my_dir = static_cast<Direction>(dir);
    while (true)
    {
        cout << "Where do you want to move? Enter U for UP, D for DOWN, L for LEFT, and R for RIGHT: "; cin >> dir;
        switch (dir)
        {
            case UP:
                y++;
                break;
            case DOWN:
                y--;
                break;
            case LEFT:
                x--;
                break;
            case RIGHT:
                x++;
                break;
            default:
                cout << "Wrong choice" << endl;
                break;

        }
        cout << "Updated position: " << x << ", " << y << endl;
    }
}
