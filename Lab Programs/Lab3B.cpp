/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 9/15/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: This program prompts the user to enter a number between 200 and 300 inclusive.
                Then generates a random seeded number in the range.
				Then checks if the random number is less than the user number.
				Requires iostream and ctime
*/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// intializing variables
	int userInt, randomInt;
	//seeds the random number
	srand(time(NULL));

	
	cout << "Enter a number between 200 and 300 "<< endl;
	cin >> userInt;
	if (userInt >= 200 && userInt <= 300)
	{
		randomInt = rand() % 101 + 200; //generated random number;
		cout << "The random number between 200 and 300 is " << randomInt << endl;
		userInt > randomInt ? cout << "The random number is less than the user number" << endl : cout << "The random number is greater than the user number" << endl;
	}
	else cout << "Number entered is not in the range." << endl; //error message if the number is not in the range.
	
	return 0;
}