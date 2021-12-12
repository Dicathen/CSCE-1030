#include <iostream>

using namespace std;

int findMaximum(int *array, int size)
{
    int max = *(array + 0);
    for (int i = 0; i < size; ++i)
    {
        if(*(array+i) > max)
        {
            max = *(array +i);
        }
    }
    return max;
}


int main()
{
    int *array;
    int size;
    cout << "Please enter the size of the array:"; cin >> size;
    array = new int[size];
    for (int i = 0; i < size; ++i)
    {
        cout << "Please enter an integer for element #" << i+1 <<":"; cin >> *(array +i);
    }

    cout << "The maximum value of the array is " << findMaximum(array,size) << endl;

    delete [] array;

    return 0;
}