// Program to accept a string from user and copy the small case characters into another string

#include <iostream>
using namespace std;

void strcpySmallX(char *Dest, char *Src)
{
    while (*Src != '\0')
    {
        if ((*Src >= 'a') && (*Src <= 'z'))
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

    strcpySmallX(Brr, Arr);

    cout << "Copied string which contains only small case characters :" << endl << Brr;

    return 0;
}
