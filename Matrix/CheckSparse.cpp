/*
    Program to accept a matrix from user and check whether is it sparse matrix or not.
    Sparse matrix is a matrix with the majority of its elements are equal to zero.

    Input :
    1   0   0   0
    0   1   4   0
    0   0   6   0
    8   0   0   1

    Output :
    true
*/

#include <iostream>
using namespace std;

void Display(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;

    cout << "Matrix :\n";
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
    }
}

bool ChkSparse(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;
    int zero = 0;
    int n_zero = 0;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (Arr[i][j] == 0)
            {
                zero++;
            }
            else
            {
                n_zero++;
            }
        }
    }
    if (zero > n_zero)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Arr[10][10];
    int iValue1 = 0, iValue2 = 0;
    int i = 0, j = 0;
    bool bRet = false;

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

    bRet = ChkSparse(Arr, iValue1, iValue2);
    if (bRet == true)
    {
        cout << "It is Sparse Matrix\n";
    }
    else
    {
        cout << "It is not Sparse Matrix\n";
    }

    return 0;
}
