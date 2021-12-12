#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

const int TEST_NUMBER = 5;

enum Menu {Add = 1, Remove = 2, Display = 3, Search = 4, Results = 5, Quit = 6};

struct Student
{
    string name;
    string studentID;
    int numberOfTests;
    int *testScores;
    double averageTestScore;
};

int getNumber();
void showMenu();
Student* readFile();
void personalIdentifier();
void add_Student();
void remove_Student(string removeStudentID);
void display();
void search(string searchID);
void exportResults();
int findMinimum(int array[], int size);

