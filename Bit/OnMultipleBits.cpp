// Program to accept number from user and ON its first 4 bits. Return modified number.

#include <iostream>
using namespace std;

int OnBit(int iNo)
{
    unsigned int iMask = 0X0000000f;
    unsigned int iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = OnBit(iValue);

    cout << "Updated number : " << endl << iRet;

    return 0;
}
