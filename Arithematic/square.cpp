// Program to accept a number from user and print square of that number

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

    int Square()
    {
        int iAns = 0;
        iAns = iNo * iNo;
        return iAns;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    Arithematic aobj(iValue);

    iRet = aobj.Square();

    cout << "Square of " << iValue << " :" << endl << iRet;

    return 0;
}
