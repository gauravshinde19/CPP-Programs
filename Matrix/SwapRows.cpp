/*
    Program to accept a matrix from user and swap the contents of consecutive rows

    Input :
    3   2   9   7
    4   3   2   2
    8   4   1   5
    6   9   7   5

    Output :
    4   3   2   2
    3   2   9   7
    6   9   7   5
    8   4   1   5
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

void SwapRows(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;
    int temp = 0;

    for (i = 0; i < iRow - 1; i = i + 2)
    {
        for (j = 0; j < iCol; j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[i + 1][j];
            Arr[i + 1][j] = temp;
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

    cout << "Matrix before swapping : " << endl;
    Display(Arr, iValue1, iValue2);

    cout << "Matrix after swapping : " << endl;
    SwapRows(Arr, iValue1, iValue2);
    Display(Arr, iValue1, iValue2);

    return 0;
}
