// Program to accept a string from user and copy the string into another string

#include <iostream>
using namespace std;

void strcpyX(char *Dest, char *Src)
{
    while (*Src != '\0')
    {
        *Dest = *Src;

        Src++;
        Dest++;
    }

    *Dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter the source string :" << endl;
    cin.getline(Arr, 30);

    strcpyX(Brr, Arr);

    cout << "Copied string :" << endl << Brr;

    return 0;
}
