// Program to accept a number from user and print square root of that number if square root is whole number

#include <iostream>
using namespace std;

class Arithematic
{
public:
    int iNo;

    Arithematic(int A)
    {
        iNo = A;
    }

    int SquareRoot()
    {
        int iCnt = 0;
        bool bFlag = false;

        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if ((iCnt * iCnt) == iNo)
            {
                bFlag = true;
                break;
            }
        }

        if (bFlag == true)
        {
            return iCnt;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    Arithematic aobj(iValue);

    iRet = aobj.SquareRoot();

    if (iRet != -1)
    {
        cout << "Square root of " << iValue << " :" << endl << iRet;
    }
    else
    {
        cout << iValue << " is not a square of any number" << endl;
    }

    return 0;
}
