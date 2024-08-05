// Program to accept number from user and toggle 7th and 10th bit of the number. Return modified number.

#include <iostream>
using namespace std;

int ToggleBit(int iNo)
{
    unsigned int iMask = 0X00000240;
    unsigned int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = ToggleBit(iValue);

    cout << "Updated number : " << endl << iRet;

    return 0;
}
