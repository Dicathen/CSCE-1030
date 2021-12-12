/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 10/20/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Prompts user for 2 strings and computes the ASCII sum of the string
                Outputs statement based on if string 1 is larger.
                Requires iostream and string.
*/
#include <iostream>
#include <string>

using namespace std;

/* Function: isLarger
   Parameters: A string representing the user's first inputted string.
               A string representing the user's second inputted string.
   Return:     A boolean representing if str1's ASCII summation is larger than str2's ASCII summation.
   Description: This function computes and compares the ASCII summation of 2 strings then returns a boolean comparing the two summations with respect to the first string.
 */
bool isLarger(string str1, string str2)
{
   int sum1 = 0;
   int sum2 = 0;

   //Loops through both strings and sums up the ASCII values.
   for(auto& x : str1 ) sum1 += x;
   for(auto& x : str2 ) sum2 += x;

   return (sum1 > sum2);

}

int main()
{
    //Prompts the user for 2 strings
   string str1, str2;
   cout << "Please enter string#1:"; cin >> str1;
   cout << "Please enter string#2:"; cin >> str2;

   //Uses the boolean value returned by isLarger to output appropriate message to user.
   if (isLarger(str1, str2)) cout << "str1 has a larger ASCII sum." << endl;
   else cout << "str1 does not have a larger ASCII sum." << endl;
   return 0;
}