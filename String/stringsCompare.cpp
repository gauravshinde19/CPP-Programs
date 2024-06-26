// Program to accept two strings from user and compare the string

#include <iostream>
using namespace std;

bool strcmpX(char *first, char *second)
{
    while ((*first != '\0') && (*second != '\0'))
    {
        if (*first != *second)
        {
            break;
        }
        else
        {
            first++;
            second++;
        }
    }

    if ((*first == '\0') && (*second == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }  
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    cout << "Enter the first string :" << endl;
    cin.getline(Arr, 30);

    cout << "Enter the second string :" << endl;
    cin.getline(Brr, 30);

    bRet = strcmpX(Arr, Brr);

    if (bRet == true)
    {
        cout << "Strings are identical";
    }
    else
    {
        cout << "Strings are diffrent";
    }

    return 0;
}
