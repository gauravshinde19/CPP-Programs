// Program to accept two numbers from user and display position of common on bits from that number

#include <iostream>
using namespace std;

void CommonBits(int iNo1, int iNo2)
{
    int iPos = 0;

    cout << "Common bit at position :" << endl;
    for (int i = 1; i <= 32; i++)
    {
        if ((iNo1 & (1 << i)) && (iNo2 & (1 << i)))
        {
            cout << ++i << endl;
            iPos++;
        }
    }

    if (iPos == 0)
    {
        cout << "No common bits found" << endl;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout << "Enter the first number :" << endl;
    cin >> iValue1;

    cout << "Enter the second number :" << endl;
    cin >> iValue2;

    CommonBits(iValue1, iValue2);

    return 0;
}
