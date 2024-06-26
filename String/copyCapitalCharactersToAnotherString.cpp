// Program to accept a string from user and copy the capital characters into another string

#include <iostream>
using namespace std;

void strcpyCapX(char *Dest, char *Src)
{
    while (*Src != '\0')
    {
        if ((*Src >= 'A') && (*Src <= 'Z'))
        {
            *Dest = *Src;
            Dest++;
        }

        Src++;
    }

    *Dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter the source string :" << endl;
    cin.getline(Arr, 30);

    strcpyCapX(Brr, Arr);

    cout << "Copied string which contains only capitalS characters :" << endl << Brr;

    return 0;
}
