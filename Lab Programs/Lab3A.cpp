/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 9/15/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: This programs prompts the user to enter variables
                and then outputs variables in a sentence. Include stdio.h
*/
#include <stdio.h>
using namespace std;

int main()
{
	//initializing variables
	char a,b;
	int c,d;
	double e,f;
	
	//prompts user to enter variables then assigns the variables
	printf("Enter two characters: \n");
	scanf("%c %c", &a, &b);
	printf("You just entered the characters %c and %c \n",a,b);
	printf("Enter two integers: \n");
	scanf("%i %i", &c, &d);
	printf("You just entered the integers %i and %i \n",c,d);
	printf("Enter two doubles: \n");
	scanf("%lf %lf", &e, &f);
	printf("You just entered the doubles %lf and %lf \n",e,f);
	
	return 0;
	
}	





