// Program to accept two numbers from user and perform Multiplication of that numbers

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

    int Multiplication()
    {
        int iMul = 0;
        iMul = iNo1 * iNo2;
        return iMul;
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

    iRet = aobj.Multiplication();

    cout << "Multiplication :" << endl << iRet;

    return 0;
}
