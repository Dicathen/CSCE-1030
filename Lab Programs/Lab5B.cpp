/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 9/29/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program generates two random integers between 10 and 20 plus 20 and 30 inclusive.
                Program then sums it up in a while loop
                Requires cmath library
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    enum Operation {Multiply = 'M', Add = 'A', Difference = 'D'};
    int result;
    int num1, num2;
    Operation my_operation;
    char choice;
    bool complete = false;

    cout << "Enter two integers:"; cin >>num1>>num2;
    do
    {
      cout <<"Please enter operation of choice (M for Multiplication, A for Addition, and D for difference):"; cin >>choice;
      choice = toupper(choice);
      my_operation = static_cast<Operation>(choice);

        switch (my_operation)
        {
            case Multiply:
                result = num1 * num2;
                complete = true;
                break;
            case Add:
                result = num1 + num2;
                complete = true;
                break;
            case Difference:
                result = fabs(num1 - num2);
                complete = true;
                break;
            default:
                cout << "Please enter a correct operation choice." << endl;
        }
    } while (!complete);
    cout << "The result of the operation is " << result << endl;
    return 0;
}