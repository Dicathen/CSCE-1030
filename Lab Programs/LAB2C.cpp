/* Author: Alex Ho (AlexHo2@my.unt.edu)
   Date: 9/7/2021
   Instructor: Pradhumna Shrestha
   Description: Input the name of an employee & calculate + display the employee's bonus
 */
#include <iostream>
using namespace std;

int main()
{
    //Initializing variables
    string name;
    double salary;
    int rate;
    double bonus;

    cout << "Enter the employee's full name: " << endl; //Prompting user for employee name and assigning it to "name" variable.
    getline(cin,name);
    cout << "Enter the employee's salary: " << endl; //Prompting user for employee salary and assigning it to "salary" variable.
    cin >> salary;
    cout << "Enter the employee's bonus rate" << endl; //Prompting user for the employee bonus rate and assigning it to "rate" variable;
    cin >> rate;
    bonus = (static_cast<double>(rate)/100); //Expressing the bonus rate as a decimal.
    cout.setf(ios::fixed);
    cout.setf((ios::showpoint));
    cout.precision(2); //Sets the precision of the floating point output as specified by the assignment
    cout << name << " earned a bonus of " << salary * bonus << endl; //Outputs the employees name and their bonus calculated using their salary and bonus rate.

    return 0;
}
