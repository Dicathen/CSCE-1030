/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 9/29/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program prompts user for a string.
                Program returns the amount of consonants and vowels in the string.
                Requires string library
*/

#include <iostream>
#include <string>
using namespace std;

/* Function: vowelCount
 * Parameters: a string representing the user input
 *             a string representing all the vowels
 *             an integer representing the number of vowels
 * Return: an integer representing the vowel count
 * Description: This function computes and returns the amount of vowels in a string;
 */
int vowelCount(string input)
{
    int count = 0;
    string vowels = "AEIOUaeiou";
    for (int i = 0; i < input.length(); ++i)
    {
        //checks if the location of the character in the vowels string is in the string.
      if(vowels.find(input.at(i)) != string::npos) count++;
    }
    return count;
}

/* Function: consonantCount
 * Parameters: a string representing the user input
 *             a string representing all the vowels
 *             an integer representing the number of consonants
 * Return: an integer representing the consonant count
 * Description: This function computes and returns the amount of vowels in a string;
 */
int consonantCount(string input)
{
    int count = 0;
    string vowels = "AEIOUaeiou";
    for (int i = 0; i < input.length(); ++i)
    {
        //checks if the location of the character in the vowels string is not in the string.
        if(vowels.find(input.at(i)) == string::npos) count++;
    }
    return count;
}

int main()
{
    string userInput;
    cout << "Please enter string:"; cin >> userInput;
    cout << "This string has " << vowelCount(userInput) << " vowels and has " << consonantCount(userInput) << " consonants." << endl;
    return 0;
}