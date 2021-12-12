/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 9/22/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program prompts the user for a string to compare to the already instantiated string.
                Requires string library.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Initializing/declaring variables.
    string toSearch = "In this lab we will search inside C++ strings.";
    string toFind;
    int location;
    //Prompts user to enter a string to search for.
    cout <<"Enter a single word to search in a string:"; cin >> toFind;
    location = toSearch.find(toFind); //Searches the initialized string for the user string and stores the location in int variable.

    //If/else statement checks if the location is a valid index by checking if it's a positive value + within the string's length.
    //Outputs a suitable message depending on the boolean statement.
    if(location >= 0 && location <= (toSearch.length() - 1))
    {
        cout << "The location of the string is at " << location << "." << endl;
    }
    else cout << "The string does not contain your string." << endl;

    return 0;
}

