/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 9/15/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: This program computes the bonus of an employee
				depending on salary, years of exerience, and performance.
				Requires stdio.h
*/
#include <stdio.h>
using namespace std;
int main()
{
	float salary;
	int experience;
	char performance;
	
	printf("Enter satisfactory performance \n");
	scanf("%c", &performance);
	printf("Enter salary \n");
	scanf("%f", &salary);
	printf("Enter experience \n");
	scanf("%i", &experience);
	if (performance == 'y' || performance =='Y')
	{
		if(experience >= 10)
		{
			printf("Bonus is $%.2f \n", salary*.1);
		}
		else
		{
			printf("There is no bonus");
		}
		
	}
	else
	{
		if(experience >= 10)
		{
			printf("Bonus is $%.2f \n", salary*.03);
		}
		else
		{
			printf("There is no bonus \n");
		}
	}
	
		
	
	
	
	return 0;
}