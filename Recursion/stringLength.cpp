// Program to accept string from user and return length of string using recursion

#include <iostream>
using namespace std;

int strlenX(char *str)
{
    static int iLength = 0;

    if (*str != '\0')
    {
        iLength++;
        str++;
        strlenX(str);
    }
    
    return iLength;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout << "Enter the string :" << endl;
    cin.getline(Arr, 30);

    iRet = strlenX(Arr);

    cout << "Length : " << iRet << endl;

    return 0;
}
