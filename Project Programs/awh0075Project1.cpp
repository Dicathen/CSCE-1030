/* Author: Alex Ho AlexHo2@my.unt.edu
   Date: 9/23/2021
   Instructor : Dr. Pradhumna Shrestha
   Description: Program prompts user for information. (Name, Account #, # of Properties, Types of Properties, and Value of Properties)
                Program then processes all this data to output the taxes required for said properties.
                Requires iostream, ctime, and iomanip;

*/

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

//declared variables later use;
const int ACCOUNT_LENGTH = 6;
string accNumber,accName;
enum PropertyType  {Commercial = 1, Residential = 2};
bool isValidAccName = false, isValidAccNum = false;
double taxationSum = 0;

//function that outputs the identifying information of the creator.
void personalIdentifier()
{
    cout << "+-------------------------------------------------+" << endl;
    cout << "|          Computer Science and Engineering       |" << endl;
    cout << "|           CSCE 1030 - Computer Science I        |" << endl;
    cout << "|         Alex Ho awh0075 awh0075@my.unt.edu      |" << endl;
    cout << "+-------------------------------------------------+" << endl;
}

//Function that asks the user for their name and validates if it's in the correct format/
void accNameValidation()
{
    while (!isValidAccName)
    {
        string tempString;
        cout << "Please enter account name:"; getline(cin, tempString);
        //iterates through all the characters to check if they are digits, breaks if there is one and returns the loop back to the beginning.
        for (int i = 0; i < tempString.length(); ++i)
        {
            if (isdigit(tempString.at(i)))
            {
                cout << "Your name can only have letters or spaces. Please enter again." << endl;
                isValidAccName = false;
                break;
            }
            else
            {
                isValidAccName = true;
                //This if statement capitalizes the initials of the name while it's being iterated through.
                if (i == 0 || tempString.at(i-1) == ' ')
                {
                    tempString.at(i) = toupper(tempString.at(i));
                }
            }
        }
        //Assigns accName variable with the entered name if the name is in correct format.
        if (isValidAccName) accName = tempString;
    }
}

//This function prompts the user for an account number and validates for correct format.
void accNumValidation()
{
    while (!isValidAccNum)
    {
        string tempString;
        cout << "Please enter account number:"; getline(cin, tempString);
        for (int i = 0; i < tempString.length(); ++i)
        {
            //This if statements serves as a primary checker if the user doesn't have the correct length
            //Also serves as a iterative checker if the character is an alphanumerical letter.
            if (!isalnum(tempString.at(i)) || tempString.length() != ACCOUNT_LENGTH)
            {
                cout << "Your account number can only have 6 alphanumeric characters. Please enter again." << endl;
                isValidAccNum = false;
                break;
            }
            else isValidAccNum = true;
        }
        //Assigns accNumber variable with the entered account number if the number is in correct format.
        if (isValidAccNum) accNumber = tempString;
    }
}

//This function prompts the user for their properties and computes their taxes.
void propertyProcessor()
{
    int maxPropertyCount;
    //This do-while loop validates if the # of properties is a positive integer than is non-zero.
    do
    {
        cout << "How many properties do you want to process:"; cin >> maxPropertyCount;
        if(maxPropertyCount <= 0) cout << "Please enter a valid number." << endl;
    }while(maxPropertyCount <= 0);
    for (int i = 1; i <= maxPropertyCount ; ++i)
    {
        int propertyType;
        double propertyValue;
        double currentPropertyTax = 0;
        bool isComplete = false;
        do
        {
        //Prompts user for information about their property.
        cout << "Processing property #" << i << endl << "1. Commerical" << endl << "2. Residential" << endl << "Enter property type:"; cin >> propertyType;
        PropertyType currentPropertyType = static_cast<PropertyType>(propertyType);
        do
        {
            cout << "What is the value of this property:"; cin >> propertyValue;
            if (propertyValue <= 0) cout << "Please enter a proper valuation." << endl;
        } while (propertyValue <= 0);
        switch (currentPropertyType)
        {
            case Commercial:
                //If the property value is less than 1 Mil, the tax value is 3.5%.
                if (propertyValue < 1000000)
                {
                    currentPropertyTax = propertyValue * .035;
                    taxationSum += currentPropertyTax;
                }
                //If the property value is greater than or equal to 1 Mil, the tax value is 3.5% of 1 Mil + 5% of any value above 1 Mil.
                if (propertyValue >= 1000000)
                {
                    currentPropertyTax += 1000000 * .035;
                    currentPropertyTax += (propertyValue - 1000000) * .05;
                    taxationSum += currentPropertyTax;
                }
                cout << "Tax owed for property #" << i << " = " << fixed << setprecision(2) << currentPropertyTax << endl;
                isComplete = true;
                break;
            case Residential:
                //If the property value is less than 100K, the tax value is 0;
                if (propertyValue < 100000)
                {
                    currentPropertyTax = 0;
                }
                //If the property value is over 100K, the tax value is 3.5% of any value above 100k.
                if (propertyValue >= 100000)
                {
                    currentPropertyTax = (propertyValue - 100000) * .035;
                }
                //If there is only one residential property owned by the user, this reduces their taxes by a random value between 1K -2K inclusive.
                if (maxPropertyCount == 1)
                {
                    srand(time(NULL));
                    double taxReduction = rand() % 1001 + 1000;
                    cout << "Single property tax reduction: $" << fixed << setprecision(2) << taxReduction << endl;
                    currentPropertyTax -= taxReduction;
                    if(currentPropertyTax < 0) currentPropertyTax = 0;
                }
                taxationSum += currentPropertyTax;
                cout << "Tax owed for property #" << i << " = " << fixed << setprecision(2) << currentPropertyTax << endl;
                isComplete  = true;
                break;
            default:
                cout << "User entered incorrect input. Please enter again." << endl;
        }
        }while (!isComplete);
    }
}
//This function returns the user information and their total tax amount.
void completeTaxProfile()
{
    cout << "Name:" << accName << endl << "Account Number:" << accNumber << endl << "Your total tax amount: $" << fixed << setprecision(2) << taxationSum << endl;
}

//Runs all the functions above.
int main()
{
    personalIdentifier();
    accNameValidation();
    accNumValidation();
    propertyProcessor();
    completeTaxProfile();
    return 0;
}