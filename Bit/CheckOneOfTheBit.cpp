// Program to accept number from user and check whether 9th or 12th bit is ON or OFF

#include <iostream>
using namespace std;

bool ChkBit(unsigned int iNo)
{
    unsigned int iMask9 = 0x00000100;
    unsigned int iMask12 = 0x00000800;
    int iResult = 0;

    iResult = (iNo & iMask9) | (iNo & iMask12);
    if ((iResult == iMask9) || (iResult == iMask12))
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
    unsigned int iValue = 0;
    bool bRet = false;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    bRet = ChkBit(iValue);

    if (bRet == true)
    {
        cout << "9th or 12th bit is ON" << endl;
    }
    else
    {
        cout << "9th or 12th bit is OFF" << endl;
    }
    
    return 0;
}
