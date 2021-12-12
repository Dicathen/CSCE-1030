/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 10/13/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: This program sorts a char array in reverse lexicographic order
				Requires the array library.
*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
	//initializing variables
    char arr[] = {'b','f','a','z','m','g','q','t'};
	//Prints out array
    cout << "Original Array:" << endl;
    for (auto& x : arr) cout << x << "\t";
    cout << endl;
	//Bubble sorts the array in reverse lexicographic order.
    int arraySize = (sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < arraySize; ++i)
    {
        for (int j = 0; j < arraySize - i; ++j)
        {
            if(arr[j+1] > arr[j])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	//Prints out the sorted array.
    cout << "Sorted Array:" << endl;
    for ( auto& x : arr) cout << x << "\t";
    cout << endl;
    return 0;
}