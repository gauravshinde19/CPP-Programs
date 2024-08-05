// Program to accept number from user and check whether 7th, 15th, 21th and 28th bits are ON or OFF

#include <iostream>
using namespace std;

bool ChkBit(int iNo)
{
    unsigned int iMask = 0X08104040;
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
        cout << "7th, 15th, 18th and 28th bits are ON" << endl;
    }
    else
    {
        cout << "7th, 15th, 18th and 28th bits are OFF" << endl;
    }
    
    return 0;
}
