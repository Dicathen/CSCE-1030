/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 10/27/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program generates an array with size 10 with random integers.
                Program outputs the array to the user
                Program then finds the maximum number in the array and outputs it to the user.
*/

#include <iostream>
#include <ctime>
#include <array>

using namespace std;

int findLargestValue(int inputArray[])
{
    int max = inputArray[0];

    for (int i = 0; i < 10; ++i)
    {
       if(inputArray[i] > max) max = inputArray[i];
    }

    return max;
}
int main()
{
    srand(time(NULL));
    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        array[i] = rand() % 51 + 50;
    }

    for (auto& x: array) cout << x << "\t";
    cout << endl;

    cout << "The maximum value of this array is " << findLargestValue(array) << endl;
    return 0;
}