// Program to accept a string from user and copy all the string into another string without white spaces

#include <iostream>
using namespace std;

void strcpySpaceX(char *Dest, char *Src)
{
    while (*Src != '\0')
    {
        if (*Src != ' ')
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

    strcpySpaceX(Brr, Arr);

    cout << "Copied string which does not contain white spaces :" << endl << Brr;

    return 0;
}
