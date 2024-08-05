/*
    Program to accept a matrix from user and check whether is it identity matrix or not.
    Identity matrix is a square matrix with 1's along the diagonal from upper left to lower right and 0's in all other position.  

    Input :
    1   0   0   0
    0   1   0   0
    0   0   1   0
    0   0   0   1

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

bool ChkIdentity(int Arr[][10], int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if (iRow != iCol)
    {
        return false;
    }

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (i == j && Arr[i][j] != 1)
            {
                return false;
            }
            else if (i != j && Arr[i][j] != 0)
            {
                return false;
            }
        }
    }

    return true;
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

    bRet = ChkIdentity(Arr, iValue1, iValue2);
    if (bRet == true)
    {
        cout << "It is Identity Matrix\n";
    }
    else
    {
        cout << "It is not Identity Matrix\n";
    }
    
    return 0;
}
