/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 10/20/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Computes bonus of employee based on years of experience
                Requires iostream and iomanip.
*/
#include <iostream>
#include <iomanip>

using namespace std;

//declares the function compute_bonus.
double compute_bonus(double base_salary, int experience);

int main()
{
   double base_salary;
   int experience;

   //Prompts user for salary and years of experience.
   cout << "Please enter base salary:"; cin >> base_salary;
   cout << "Please enter years of experience:"; cin >> experience;
   //Outputs the bonus of the employee with a precision to 2 decimal places.
   cout << "The bonus of this employee is $" << fixed << setprecision(2) << compute_bonus(base_salary, experience) << "." << endl;

   return 0;
}

//defines the function compute_bonus
double compute_bonus(double base_salary, int experience)
/* Function: compute_bonus
   Parameters: A double representing base salary.
               A integer representing years of experience.
   Return:     A double representing a bonus.
   Description:This function computes a bonus based on years of experience.
 */
{
    // returns the bonus based on if years of experience is over 10
   if(experience > 10) return base_salary * .06;
   return base_salary * .03;
}