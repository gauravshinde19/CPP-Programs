// Program to accept number from user and display its digits using recursion

#include <iostream>
using namespace std;

void Display(int iNo)
{
    int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        cout << iDigit << endl;
        iNo = iNo / 10;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    Display(iValue);

    return 0;
}
