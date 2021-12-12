#include "awh0075_header.h"


int main()
{
    bool endingChoice = false;
    int choice;
    string argument;

    personalIdentifier();
    do
    {
        showMenu();
        cout << "Enter choice:"; cin >> choice;
        Menu menuChoice = static_cast<Menu>(choice);
        switch (menuChoice)
        {
            case Add:
                add_Student();
                break;
            case Remove:
                cout << "Please enter the ID of the student you'd like to remove:"; cin >> argument;
                remove_Student(argument);
                break;
            case Display:
                display();
                break;
            case Search:
                cout << "Please enter the ID of the student you'd like to search:"; cin >> argument;
                search(argument);
                break;
            case Results:
                exportResults();
                break;
            case Quit:
                endingChoice = true;
                cout << "Have a nice day!" << endl;
                break;
            default:
                cout << "Please enter a correct choice." << endl;
                break;
        }
    } while (!endingChoice);
    return 0;
}
