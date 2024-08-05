// Program to accept number from user and check whether 15th bit is ON or OFF

#include <iostream>
using namespace std;

bool ChkBit(int iNo)
{
    unsigned int iMask = 0X00004000;
    int iResult = 0;

    iResult = iNo & iMask;
    if (iResult == iMask)
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
        cout << "15th bit is ON" << endl;
    }
    else
    {
        cout << "15th bit is OFF" << endl;
    }
    
    return 0;
}
