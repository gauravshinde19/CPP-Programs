/*
    Program to accept a matrix from user and accept one number from user and return the frequency of that number from matrix

    Input :
    3   2   5   9
    4   3   2   2
    8   4   1   5
    3   9   7   5

    Input : 5
    Output : 3
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

int CountFrequency(int Arr[][10], int iRow, int iCol, int iNo)
{
    int i = 0, j = 0;
    int iCount = 0;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (Arr[i][j] == iNo)
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int main()
{
    int Arr[10][10];
    int iValue1 = 0, iValue2 = 0;
    int iSearch = 0;
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

    cout << "Enter the number that you want to search :\n";
    cin >> iSearch;

    iRet = CountFrequency(Arr, iValue1, iValue2, iSearch);

    cout << "Frequency of number " << iSearch << " in matrix is " << iRet << endl;

    return 0;
}
