/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 9/29/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program generates two random integers between 10 and 20 plus 20 and 30 inclusive.
                Program then sums it up in a while loop
*/
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    //Seeding the random generator and initializing variables.
    srand(time(NULL));
    int firstRand = rand() % 11 + 10;
    int secondRand = rand() % 11 + 20;
    int iterator = firstRand;
    int summation = 0;

    //While iterator is less than or equal to secondRand, iterator is added to summation.
    while (iterator <= secondRand)
    {
        summation += iterator;
        iterator++;
    }
    //Prints out the first and second random integers then returns the sum of all integers between them including the start and end points.
    cout << "The two random integers are " << firstRand << " and " << secondRand << endl;
    cout << "The sum of all integers between them is " << summation << endl;

    return 0;
}