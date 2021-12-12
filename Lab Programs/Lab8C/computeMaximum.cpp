#include "Lab8_header.h"
void computeMaximum(float grades[][COLS], int num, float maximum[])
{
    for (int row = 0; row < num; ++row)
    {
        int max = grades[row][0];
        for (int col = 0; col < COLS; ++col)
        {
            if(grades[row][col] > max) max = grades[row][col];
        }
        maximum[row] = max;
    }
}