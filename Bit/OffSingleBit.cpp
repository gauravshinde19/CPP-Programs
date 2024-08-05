// Program to accept number from user and OFF 7th bit of that number if it is on. Return modified number.

#include <iostream>
using namespace std;

int OffBit(int iNo)
{
    unsigned int iMask = 0X00000040;
    unsigned int iResult = 0;

    iResult = iNo & ~iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = OffBit(iValue);

    cout << "Updated number : " << endl << iRet;

    return 0;
}
