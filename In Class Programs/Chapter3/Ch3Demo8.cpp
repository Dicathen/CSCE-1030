#include <iostream>
using namespace std;

int main()
{
    int  x = 0, y = 0;
    int dir;

    while (true)
    {
        cout << "Where do you want to move? Enter 0 for UP, 1 for DOWN, 2 for LEFT, and 3 for RIGHT: "; cin >> dir;
        switch (dir)
        {
            case 0:
                y++;
                break;
                case 1:
                    y--;
                    break;
                    case 2:
                        x--;
                        break;
                        case 3:
                            x++;
                            break;
                            default:
                                cout << "Wrong choice" << endl;
                                break;

        }
        cout << "Updated position: " << x << ", " << y << endl;
    }
}
