// Program to delete the file permanantly

#include<iostream>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

using namespace std;

#define MAX_SIZE 30

int DeleteFile(char *fName)
{
    int iRet = 0;

    iRet = unlink(fName);

    return iRet;
}

int main()
{
    char FileName[MAX_SIZE] = {'\0'};
    int iRet = 0;

    cout << "Enter the name of file that you want to delete :" << endl;
    cin >> FileName;

    iRet = DeleteFile(FileName);

    if (iRet == -1)
    {
        cout << "Unable to delete the file" << endl;
    }
    else
    {
        cout << "File gets successfully deleted" << endl;
    }
}
