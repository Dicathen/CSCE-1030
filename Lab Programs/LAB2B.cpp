/* Author: Alex Ho (AlexHo2@my.unt.edu)
   Date: 9/7/2021
   Instructor: Pradhumna Shrestha
   Description: Calculates the volume of a sphere
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //initializing user input and calculated variables for usage later.
    float radius;
    float volume;
    //initializing and assigning known variable valuables for assignment
    float pi = 3.14159;
    float multiplier = (float)4/3;
    cout << "Input the radius of the sphere (in cm):" << endl; //Prompting user to input a radius
    cin >> radius;
    volume = multiplier*pi* pow(radius,3); //Calculating volume given formula and inputted variables
    cout << "The volume of the sphere is:  " << volume << endl; //Outputting the calculated volume of the sphere.

    return 0;
}