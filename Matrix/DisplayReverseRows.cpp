/*
    Program to accept a matrix from user and display each row in reverse order

    Input :
    3   2   9   7
    4   3   2   2
    8   4   1   5
    6   9   7   5

    Output :
    7   9   2   3
    2   2   3   4
    5   1   4   8
    5   7   9   6
*/

#include <iostream>
using namespace std;

void Display(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void ReverseRows(int Arr[][10], int iRow, int iCol)
{
    int temp = 0;
    
    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol / 2; j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[i][iCol - 1 - j];
            Arr[i][iCol - 1 - j] = temp;
        }
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

    cout << "Original Matrix : " << endl;
    Display(Arr, iValue1, iValue2);

    cout << "Reverse Matrix : " << endl;
    ReverseRows(Arr, iValue1, iValue2);
    Display(Arr, iValue1, iValue2);

    return 0;
}
