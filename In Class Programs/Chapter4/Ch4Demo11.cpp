#include <iostream>
using namespace std;

int main()
{
    enum Direction {UP = 'U', DOWN = 'D', LEFT = 'L', RIGHT = 'R'};
    Direction my_dir;
    int  x = 0, y = 0;
    char dir, answer;

    my_dir = static_cast<Direction>(dir);
    do
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
        cout << "Would you like to move again? (Y/N):"; cin >> answer;
        cout << answer;
    }while(toupper(answer) == 'Y');

    return 0;
}

