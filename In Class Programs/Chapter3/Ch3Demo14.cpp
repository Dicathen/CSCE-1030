#include <iostream>
using namespace std;

int main()
{
    string str = "This is CSCE 1030. Welcome to the class!!!";

    int location = str.find("1030");
    cout << "Location: " << location << endl;

    /*string search;
    cout << "What do you want to search? "; cin >> search;
    location = str.find(search);
    cout << "Location = " << location << endl; */

    string extracted_str = str.substr(8,9);
    cout << "Extracted string: " << extracted_str << endl;


    return 0;
}