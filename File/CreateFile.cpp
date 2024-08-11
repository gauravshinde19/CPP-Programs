// Program to create file

#include<iostream>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

using namespace std;

#define MAX_SIZE 30

int CreateFile(char *fName)
{
    int iRet = 0;

    iRet = creat(fName, 0777);

    return iRet;
}

int main()
{
    char FileName[MAX_SIZE] = {'\0'};
    int iFD = 0;

    cout << "Enter the name of file that you want to create :" << endl;
    cin >> FileName;

    iFD = CreateFile(FileName);

    if (iFD == -1)
    {
        cout << "Unable to create file" << endl;
    }
    else
    {
        cout << "File gets successfully created with fd " << iFD << endl;
    }
}
