// Program to accept a number from user and print cube root of that number if cube root is whole number

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

    int CubeRoot()
    {
        int iCnt = 0;
        bool bFlag = false;

        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if ((iCnt * iCnt * iCnt) == iNo)
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

    iRet = aobj.CubeRoot();

    if (iRet != -1)
    {
        cout << "Cube root of " << iValue << " :" << endl << iRet;
    }
    else
    {
        cout << iValue << " is not a cube of any number" << endl;
    }

    return 0;
}
