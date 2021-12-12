/* Author: Alex Ho (AlexHo2@my.unt.edu)
   Date: 9/7/2021
   Instructor: Pradhumna Shrestha
   Description: Simple program that declares, initializes, and prints variables
 */
#include <iostream>
using namespace std;

int main()
{
    //Initializing variables
    int var1;
    char var2;
    float var3,var4;
    //Assigning variables
    var1 = 30;
    var2 = 'A';
    var3 = 4.5;

    //Assigning a variable with the resultant of an arithmetic expression
    var4 = var3 + var2 % var1;

    //Outputting the variable that was calculated earlier.
    cout << var4 << endl;

    return 0;
}

