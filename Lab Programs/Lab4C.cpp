/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 9/22/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program prompts the user for a string to evaluate
                Program then evaluates the string for correct format.
                Requires string library
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string toEvaluate; //initializing variable

    cout << "Enter a string:"; getline(cin,toEvaluate); //Prompts user for a string and stores it in a string variable.

    //Checks if the first character is upper case and the last character is a period. Outputs suitable message.
    if (isupper(toEvaluate.at(0)) && toEvaluate.at(toEvaluate.length() - 1) == '.') cout << "This string is in a correct format." << endl;
    //If the above condition is false, checks if the first character is an alphabetical character. Outputs suitable message if not.
    else if (!isalpha(toEvaluate.at(0))) cout << "The first character is not in the alphabet" << endl;
    //If the above condition is false, checks if the first character is an uppercase character. Outputs suitable message if not.
    else if (!isupper(toEvaluate.at(0))) cout << "The first character is not uppercase." << endl;
    //Checks if the last character is a period. Outputs suitable message if not.
    if(toEvaluate.at(toEvaluate.length() - 1) != '.') cout << "The last character is not a period." << endl;

    return 0;
}

