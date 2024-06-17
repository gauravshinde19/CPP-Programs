// Program to accept number from user and print summation of numbers till that number using recursion

#include <iostream>
using namespace std;

int Addition(int iNo)
{
    static int iSum = 0;
    static int i = 1;
    
    while (i <= iNo)
    {
        iSum = iSum + i;
        i++;
        Addition(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = Addition(iValue);

    cout << "Addition :" << endl << iRet;

    return 0;
}
