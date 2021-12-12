/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 9/22/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program prompts the user for a character to represent the seasons.
                Program then responds to the character according to the input.
*/

#include <iostream>
using namespace std;

int main()
{
    //initializing variables
    enum Seasons {Summer = 'S', Fall = 'F', Winter = 'W', Spring = 'G'};
    char userSeasonChar;
    Seasons userSeason;

    //Prompting user for a character
    cout << "Enter a season (Summer: S/s | Fall: F/f | Winter: W/w | Spring: G/g):"; cin >> userSeasonChar;
    if(islower(userSeasonChar)) userSeasonChar = toupper(userSeasonChar); //Checks if the inputted character is lowercase then converts it to uppercase if true;
    userSeason = static_cast<Seasons>(userSeasonChar);//Converts the character to Seasons enum value to store in a separate Seasons variable;

    //switch statement that takes in the argument of userSeason to output a statement.
    switch (userSeason)
    {
        case Summer:
            cout << "It is rather hot outside." << endl;
            break;
        case Fall:
            cout << "The weather looks good." << endl;
            break;
        case Winter:
            cout << "It is rather cold outside." << endl;
            break;
        case Spring:
            cout << "The flowers are blooming." << endl;
            break;
        default:
            cout << "Wrong choice." << endl;
            break;
    }
    return 0;
}