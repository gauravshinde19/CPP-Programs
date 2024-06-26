// Program to accept a string from user and return the length of string

#include <iostream>
using namespace std;

int strlenX(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout << "Enter the string :" << endl;
    cin.getline(Arr, 30);

    iRet = strlenX(Arr);

    cout << "Length of string :" << endl << iRet;

    return 0;
}
