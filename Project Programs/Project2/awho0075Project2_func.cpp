#include "awh0075_header.h"

//Function displays personal information as required by project
void personalIdentifier()
{
    cout << "+-------------------------------------------------+" << endl;
    cout << "|          Computer Science and Engineering       |" << endl;
    cout << "|           CSCE 1030 - Computer Science I        |" << endl;
    cout << "|         Alex Ho awh0075 awh0075@my.unt.edu      |" << endl;
    cout << "+-------------------------------------------------+" << endl;
}

//Function displays menu choices to the user.
void showMenu()
{
    cout << "1.Add" << endl;
    cout << "2.Remove" << endl;
    cout << "3.Display" << endl;
    cout << "4.Search" << endl;
    cout << "5.Results" << endl;
    cout << "6.Quit" << endl;
}

//Function reads the "student.dat" file and parses all the information into a dynamic array of struc Student.
Student* readFile()
{
    Student *array;
    int count = 0;
    string line;
    array = new Student[getNumber()];
    ifstream fin;
    fin.open("student.dat");
    if (fin.fail())
    {
        cout << "Error reading file." << endl;
        exit(1);
    }
    while (getline(fin,line))
    {
        int insideCount = 0;
        string lname,fname,ID;
        istringstream my_stream(line);
        getline(my_stream, lname, ',');
        getline(my_stream, fname, ',');
        getline(my_stream, ID, ',');
        int *intArray;
        string temp;
        string temp2;
        getline(my_stream,temp2,',');
        stringstream converter(temp2);
        int temp3;
        converter >> temp3;
        intArray = new int[TEST_NUMBER];
        while (getline(my_stream,temp,','))
        {
            stringstream converter(temp);
            int testScore;
            converter >> testScore;
            *(intArray + insideCount) = testScore;
            insideCount++;
        }
        int *resizeArray = new int[insideCount];
        for (int i = 0; i < insideCount; ++i)
        {
            resizeArray[i] = intArray[i];
        }
        array[count].name = lname + "," + fname;
        array[count].studentID = ID;
        array[count].testScores = new int[insideCount];
        for (int i = 0; i < insideCount; ++i)
        {
            array[count].testScores[i] = resizeArray[i];
        }
        array[count].numberOfTests = insideCount;
        delete [] intArray;
        delete [] resizeArray;
        count++;
    }
    fin.close();
    return array;
}
//Function prompts the user for all the information of a student structure.
//Then parses all the information into the "student.dat" file.
void add_Student()
{
    ofstream fout;
    Student studentToAdd;
    int *array;
    int size;
    string lName;
    string fName;
    cout << "Please enter the student's last name:"; cin >> lName;
    cout << "Please enter the student's first name:"; cin >> fName;
    cout << "Please enter the student's ID:"; cin >> studentToAdd.studentID;
    cout << "Please enter the number of tests taken:"; cin >> size;

    array = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cout << "Please enter score for test #" << i + 1 << ":"; cin >> *(array +i);

    }

    studentToAdd.testScores = array;
    studentToAdd.name = lName + ',' + fName;
    fout.open("student.dat", fstream::app);
    if (fout.fail())
    {
        cout << "Error opening file." << endl;
        exit(1);
    }
    fout << endl << studentToAdd.name << "," << studentToAdd.studentID << "," << studentToAdd.numberOfTests << ",";
    for (int i = 0; i < size; ++i)
    {
       fout << studentToAdd.testScores[i] << ",";
    }
    fout.close();
    delete [] array;
}

//Function takes in a student ID to match with
void remove_Student(string removeStudentID)
{
    bool match = false;
    Student *array = readFile();
    for (int i = 0; i < getNumber(); ++i)
    {
        if (array[i].studentID == removeStudentID) match = true;
    }
    if (match)
    {
        int size = getNumber();
        ofstream fout;
        fout.open("student.dat");
        if (fout.fail())
        {
            cout << "File error" << endl;
            exit(1);
        }
        for (int i = 0; i < size; ++i)
        {
            if(array[i].studentID != removeStudentID)
            {
                fout << array[i].name << "," << array[i].studentID << ",";
                for (int j = 0; j < array[i].numberOfTests; ++j)
                {
                    fout << array[i].testScores[j] << ",";
                }
                fout << endl;
            }
        }
        fout.close();
    }
    else
    {
        cout << "There is no student that matches this ID number." << endl;
    }
    delete [] array;
}

void display()
{
    Student *array = readFile();
    for (int i = 0; i < getNumber(); ++i)
    {
        cout << setw(30);
        cout << array[i].name;
        cout << setw(15);
        cout << array[i].studentID;
        for (int j = 0; j < array[i].numberOfTests; ++j)
        {
            cout << setw(5);
            cout << array[i].testScores[j];
        }
        cout << endl;
    }
    delete [] array;
}

void search(string searchID)
{
    bool match = false;
    int index;
    Student *toSearch = readFile();
    Student *toDisplay;
    for (int i = 0; i < getNumber(); ++i)
    {
        if (toSearch[i].studentID == searchID)
        {
            match = true;
            index = i;
            toDisplay = &toSearch[i];
        }
    }
    if (match)
    {
        cout << setw(30);
        cout << toDisplay->name;
        cout << setw(15);
        cout << toDisplay->studentID;
        for (int i = 0; i < toDisplay->numberOfTests; ++i) {
            cout << setw(5);
            cout << toDisplay->testScores[i];
        }
        cout << endl;
    }
    else cout << "There wasn't a student with the ID you entered." << endl;
    delete [] toSearch;
}

void exportResults()
{
    ofstream fout;
    Student *array = readFile();
    fout.open("averages.dat", ios::out);
    for (int i = 0; i < getNumber(); ++i)
    {
        int sum = 0;
        float average;
        int minimumArray [array[i].numberOfTests];
        for (int j = 0; j < array[i].numberOfTests; ++j)
        {
            minimumArray[j] = array[i].testScores[j];
            sum += array[i].testScores[j];
        }
        sum -= findMinimum(minimumArray,array[i].numberOfTests);
        average = (double)sum/4;
        fout << array[i].studentID;
        fout.width(12);
        fout << fixed << showpoint << setprecision(1);
        fout << average;
        fout << endl;
    }
    fout.close();
}

int findMinimum(int array[], int size)
{
    int minimum = array[0];
    if (size < 5) minimum = 0;
    for (int i = 0; i < size; ++i)
    {
        if (array[i] < minimum) minimum = array[i];
    }
    return minimum;
}