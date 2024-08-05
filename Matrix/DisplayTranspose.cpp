/*
    Program to accept a matrix from user and display the transpose of the matrix (Interchanging rows and columns)

    Input :
    3   2   9   7
    4   3   2   2
    8   4   1   5
    6   9   7   5

    Output :
    3   4   8   6
    2   3   4   9
    9   2   1   7
    7   2   5   5
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

void Transpose(int Arr[][10], int iRow, int iCol)
{
    int temp[10][10];
    int i = 0, j = 0;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            temp[j][i] = Arr[i][j];
        }
    }

    for (i = 0; i < iCol; i++)
    {
        for (j = 0; j < iRow; j++)
        {
            Arr[i][j] = temp[i][j];
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

    cout << "Transpose Matrix : " << endl;
    Transpose(Arr, iValue1, iValue2);
    Display(Arr, iValue1, iValue2);

    return 0;
}
