/*
    Program to accept a matrix from user and return the addition of top left to bottom right diagonal elements

    Input :
    3   2   5   9
    4   3   2   2
    8   4   1   5
    3   9   7   5

    Output : 12
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

int AddDiagonal(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;
    int iSum = 0;

    if (iRow != iCol)
    {
        return -1;
    }

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (i == j)
            {
                iSum = iSum + Arr[i][j];
            }
        }
    }

    return iSum;
}

int main()
{
    int Arr[10][10];
    int iValue1 = 0, iValue2 = 0;
    int i = 0, j = 0;
    int iRet = 0;

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

    iRet = AddDiagonal(Arr, iValue1, iValue2);
    if (iRet != -1)
    {
        cout << "Sum of diagonal of matrix is " << iRet << endl;
    }
    else
    {
        cout << "Addition of diagonal is not poosible because it is not square matrix" << endl;
    }
    
    return 0;
}
