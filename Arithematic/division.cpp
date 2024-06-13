// Program to accept two numbers from user and perform division of that numbers

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

    float Division()
    {
        float fDiv = 0.0f;

        if (iNo2 == 0)
        {
            return -1;
        }
        else
        {
            fDiv = (float)iNo1 / (float)iNo2;
            return fDiv;
        }
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    cout << "Enter the first number :" << endl;
    cin >> iValue1;

    cout << "Enter the second number :" << endl;
    cin >> iValue2;

    Arithematic aobj(iValue1, iValue2);

    fRet = aobj.Division();

    if (fRet != -1)
    {
        cout << "Division :" << endl << fRet;
    }
    else
    {
        cout << "Second number should not be a 0" << endl;
    }

    return 0;
}
