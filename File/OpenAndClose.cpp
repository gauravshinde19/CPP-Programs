// Program to open and close the file

#include<iostream>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

using namespace std;

#define MAX_SIZE 30

int OpenFile(char *fName)
{
    int iRet = 0;

    iRet = open(fName, O_RDWR);

    return iRet;
}

int main()
{
    char FileName[MAX_SIZE] = {'\0'};
    int iFD = 0;

    cout << "Enter the name of file that you want to open :" << endl;
    cin >> FileName;

    iFD = OpenFile(FileName);

    if (iFD == -1)
    {
        cout << "Unable to open the file" << endl;
    }
    else
    {
        cout << "File gets successfully opened with fd " << iFD << endl;
    }

    close(iFD);
}
