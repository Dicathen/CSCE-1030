/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 10/13/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program prompts user data for a 2D matrix
                Program then computes the minimum values for rows and columns.
*/

#include <iostream>
using namespace std;

int main()
{
	//initializing variables.
   const int ROW_SIZE = 2;
   const int COLUMN_SIZE = 5;
   int matrix[ROW_SIZE][COLUMN_SIZE];
   int minRowMatrix[2];
   int minColMatrix[5];

	//Prompts the user for values for a 2 by 5 2D matrix.
   for (int i = 0; i < ROW_SIZE; ++i)
   {
      for (int j = 0; j < COLUMN_SIZE; ++j)
      {
         cout << "Enter data for row#" << i+1 <<" and column#" << j+1 << ":"; cin >> matrix[i][j];
      }
   }
	//Prints out the 2D Matrix.
   cout << "You entered:" << endl;
   for (auto& x : matrix)
   {
	   for (auto& y : x)
	   {
		   cout << y << "\t";
	   }
	   cout << endl;
   }
   cout << endl;
	//Computes the minimum value for each row.
   for (int i = 0; i < ROW_SIZE; ++i)
   {
      int temp = matrix[i][0];
      for (int j = 0; j < COLUMN_SIZE; ++j)
      {
         if (matrix[i][j] < temp)
         {
            temp = matrix[i][j];
         }
      }
      minRowMatrix[i] = temp;
   }
	//Computes the minimul value for each column.
   for (int i = 0; i < COLUMN_SIZE; ++i)
   {
      int temp = matrix[0][i];
      for (int j = 0; j < ROW_SIZE; ++j)
      {
         if (matrix[j][i] < temp)
         {
           temp = matrix[j][i];    
         }
      }
      minColMatrix[i] = temp;
   }
   //Prints out all the minimum values.
   cout << "The minimum values in each row are:" << endl;
   for (int x : minRowMatrix) cout << x << "\t";
   cout << endl;
   cout << "The minimum values in each column are:" << endl;
   for (int x : minColMatrix) cout << x << "\t";
   cout << endl;
   return 0;
}