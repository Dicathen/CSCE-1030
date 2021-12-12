/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 10/20/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Compares user inputted string to already initialized string
                Compares length and compares if they are the same string.
                Requires iostream and cstring.
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //declaration of variables.
   char str1[100];
   char str2[100];

   int str1Length;
   int str2Length;

   // Copies the string into str1 and prompts user for a string to assign to str2;
   strcpy (str1, "This is programming.");
   cout << "Please enter a string less or equal to 99 characters:"; cin.getline(str2, 100);

   //stores the lengths of str1 and 2 into variables
   str1Length = strlen(str1);
   str2Length = strlen(str2);

   //compares the length of each string length and outputs a suitable message.Terminates program if they are not the same length.
   if (str1Length == str2Length)
   {
      cout << "The strings are the same length." << endl;
   }
   else
   {
      cout << "The strings do not have the same length." << endl;
      return 0;
   }

   //compares each string to determine if they are the same. Outputs a suitable message.
   if(strcmp(str1,str2) == 0)
   {
      cout << "They are the same string." << endl;
   }
   else cout << "They are not the same string." << endl;

   return 0;
}