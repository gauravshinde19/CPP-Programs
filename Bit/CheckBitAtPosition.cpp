// Program to accept number from user and two positions from user and check Whether bit at first or bit ata second position is ON or OFF

#include <iostream>
using namespace std;

bool ChkBit(unsigned int iNo, int iP1, int iP2)
{
    int iMask1 = 0X00000001;
    int iMask2 = 0X00000001;
    int iMask3 = 0;
    int iMask4 = 0X00000001;
    int iResult = 0;
    int iPos = 0;
    int iCnt = 0;
    if (iP1 < iP2)
    {
        iPos = iP1;
    }
    else
    {
        iPos = iP2;
    }
    if ((iP1 < 1))
    {
        iPos = iP2;
    }
    if ((iP2 < 1))
    {
        iPos = iP1;
    }
    if ((iP1 > 32))
    {
        iPos = iP2;
    }
    if (iP2 > 32)
    {
        iPos = iP1;
    }
    if ((iP1 < 1) && (iP1 > 32))
    {
        return false;
    }
    if ((iP2 < 1) && (iP2 > 32))
    {
        return false;
    }

    iMask1 = iMask1 << iP1 - 1;
    iMask2 = iMask2 << iP2 - 1;
    iMask3 = iMask1 | iMask2;

    iResult = iNo & iMask3;
    iResult = iResult >> iPos - 1;

    while (iResult != 0)
    {
        if ((iResult & iMask4) == 1)
        {
            iCnt++;
            break;
        }

        iResult = iResult >> 1;
    }
    if (iCnt >= 1)
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
    int iPos1 = 0;
    int iPos2 = 0;
    bool bRet = false;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    cout << "Enter the first position :" << endl;
    cin >> iPos1;

    cout << "Enter the second position :" << endl;
    cin >> iPos2;

    bRet = ChkBit(iValue, iPos1, iPos2);

    if (bRet == true)
    {
        printf("One of the bit is ON\n");
    }
    else
    {
        printf("Both the bits are OFF\n");
    }

    return 0;
}
