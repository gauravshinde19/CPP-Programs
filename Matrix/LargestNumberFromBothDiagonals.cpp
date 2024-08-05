/*
    Program to accept a matrix from user and return the largest number from both the diagonals

    Input :
    3   2   9   7
    4   3   2   2
    8   4   1   5
    3   9   7   5

    Output : 7
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

int MaxDiagonal(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;
    int iMax = Arr[0][0];

    if (iRow != iCol)
    {
        return -1;
    }

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if ((i == j) || ((i + j) == (iRow - 1)))
            {
                if (Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
    }

    return iMax;
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

    iRet = MaxDiagonal(Arr, iValue1, iValue2);
    if (iRet != -1)
    {
        cout << "Maximum number from both the matrix is " << iRet << endl;
    }
    else
    {
        cout << "Finding largest number from the diagonals of matrix is not possible because it is not square matrix" << endl;
    }

    return 0;
}
