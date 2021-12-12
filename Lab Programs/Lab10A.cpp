/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 11/14/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Prompts user for physical information
                Uses information to determine if their BMI is within range
                Outputs an according image according to the calculation
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct Patient
{
    string name;
    float weight;
    int feet;
    int inches;
};
bool checkBMI(Patient);

int main()
{
    Patient person;
    cout << "Enter the person's name: "; getline(cin, person.name);
    cout << "Enter the person's weight in pounds: "; cin >> person.weight;
    cout << "Enter the person's height in feet and inches: "; cin >> person.feet; cin >> person.inches;

    checkBMI(person) ? cout << "The BMI of " << person.name << " is within range." << endl : cout << "The BMI of " << person.name << " is not within range." << endl;
    return 0;
}

bool checkBMI(Patient user)
{
    int totalHeight = user.feet * 12 + user.inches;
    float bmi = (703* user.weight)/ pow(totalHeight,2);
    return (bmi >= 18.5 && bmi <= 24.9);
}

