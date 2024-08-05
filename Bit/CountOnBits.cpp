// Program to accept number from user and count the number of ON bits

#include <iostream>
using namespace std;

int CountOne(int iNo)
{
    int iCount = 0;

    while (iNo > 0)
    {
        if (iNo & 1)
        {
            iCount++;
        }

        iNo = iNo >> 1;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = CountOne(iValue);

    cout << "Number of ON bits :" << endl << iRet;

    return 0;
}
