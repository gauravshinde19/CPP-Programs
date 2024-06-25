// Program to accept number from user and count its digits using recursion

#include <iostream>
using namespace std;

int Count(int iNo)
{
    static int iCount = 0;

    if (iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
        Count(iNo);
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = Count(iValue);

    cout << "Number of digits in " << iValue << " : " << endl << iRet;

    return 0;
}
