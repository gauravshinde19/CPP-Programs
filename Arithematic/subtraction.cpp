// Program to accept two numbers from user and perform subtraction of that numbers

#include <iostream>
using namespace std;

class Arithematic
{
public:
    int iNo1;
    int iNo2;

    Arithematic(int A, int B)
    {
        iNo1 = A;
        iNo2 = B;
    }

    int Subtraction()
    {
        int iSub = 0;
        iSub = iNo1 - iNo2;
        return iSub;
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout << "Enter the first number :" << endl;
    cin >> iValue1;

    cout << "Enter the second number :" << endl;
    cin >> iValue2;

    Arithematic aobj(iValue1, iValue2);

    iRet = aobj.Subtraction();

    cout << "Subtraction :" << endl << iRet;

    return 0;
}
