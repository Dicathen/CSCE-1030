/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 10/27/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program prompts the user for a random integer between 0-100 inclusive.
                Programs then generates a random integer between 0-100 inclusive and compares it.
                Program outputs relevant comparison information

*/

#include <iostream>
#include <ctime>

using namespace std;

/* Function: getRandom
   Return: A random integer between 0-100 inclusive
   Description: This function returns a random integer between 0-100 on call.
 */
int getRandom()
{
    srand(time(NULL));

    return rand() % 101;
}

/* Function: compare
   Parameters: A integer representing the user's input for a guess.
   Return:     First, returns a statement identifying what the random number generated was.
               Secondly, returns a statement regarding the user's input in comparison to the random number. (Greater than, less than, equal to)
   Description: This function compares the user's guess to a randomly generated integer between 0-100 and then outputs the random integer and a comparison statement.
 */
void compare (int guess)
{
    int randomInt = getRandom();
    cout << "The random number is " << randomInt << "." << endl;
    if(guess == randomInt) cout << "Your guess is the same as the random number!" << endl;
    else if (guess > randomInt) cout << "Your guess is greater than the random number." << endl;
    else if (guess < randomInt)  cout << "Your guess is less than the random number." << endl;
}

int main()
{
    int guess;
    cout << "Please enter an integer between 0-100:"; cin >> guess;
    compare(guess);
    return 0;
}