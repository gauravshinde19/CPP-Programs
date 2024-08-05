/*
    Program to accept a matrix from user and display the addition of each column of the matrix

    Input :
    3   2   9   7
    4   3   2   2
    8   4   1   5
    6   9   7   5

    Output :
    Sum of column 1 is 21
    Sum of column 2 is 18
    Sum of column 3 is 19
    Sum of column 4 is 19
*/

#include <iostream>
using namespace std;

void Display(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;

    cout << "Matrix of entered elements :\n";
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void ColumnSum(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;
    int iMax = Arr[0][0];
    int iSum = 0;

    cout << "Sum of each column :\n";
    for (j = 0; j < iCol; j++)
    {
        int iSum = 0;
        for (i = 0; i < iRow; i++)
        {
            iSum += Arr[i][j];
        }
        cout << "Sum of column " << j + 1 << " is " << iSum << endl;
    }
}

int main()
{
    int Arr[10][10];
    int iValue1 = 0, iValue2 = 0;
    int i = 0, j = 0;

    cout << "Enter the number of rows :\n";
    cin >> iValue1;

    cout << "Enter the number of columns :\n";
    cin >> iValue2;

    cout << "Enter the elements :\n";
    for (i = 0; i < iValue1; i++)
    {
        for (j = 0; j < iValue2; j++)
        {
            cin >> Arr[i][j];
        }
    }

    Display(Arr, iValue1, iValue2);

    ColumnSum(Arr, iValue1, iValue2);

    return 0;
}
