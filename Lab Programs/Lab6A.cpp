/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 10/13/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program prompts user for the height of 12 students
                Program displays the array of the height of 12 students
                Program outputs the average height.
                Program then outputs all heghts above average.
*/

#include <iostream>
using namespace std;

int main()
{
	//initializing variables
   const int SIZE = 12;
   int sum_height = 0;
   int height[SIZE];
   int above_average[SIZE];
   double average;
	
   for (int i = 0; i < SIZE; ++i)
   {
      cout << "Enter height in inches of student #" << i+1 << ":"; cin >> height[i];

   }
   //Summation of all the heights & calculating the average.
   for (int x : height) sum_height += x;
   average = (double)sum_height/SIZE;

	//Compares all the heights to the average and assigns the height to a new array if it's greater
   for (int i = 0; i < SIZE; ++i)
   {
      /*if (height[i] > average)
      {
         above_average[i] = height[i];
      }
      else above_average[i] = 0;*/
      height[i] > average ? above_average[i] = height[i] : above_average[i] = 0;
   }
	
	//Outputs the user entered heights
   cout << "You've entered:" << endl;
   for (int x : height) cout << x << "\t";
   cout << endl;

   cout << "The average height is " << average << endl;
	
	//Outputs the above average heights.
   cout << "Above average: " << endl;
   for (int i = 0; i < SIZE; ++i)
   {
       if (above_average[i] != 0) cout << above_average[i] << "\t";
   }
   cout << endl;
   return 0;
}