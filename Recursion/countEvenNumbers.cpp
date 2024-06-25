// Program to accept N numbers from user and return count of even numbers from array using recursion

#include <iostream>
using namespace std;

int CountEven(int Arr[], int iSize)
{
    static int i = 0;
    static int iCnt = 0;

    if (i < iSize)
    {
        if ((Arr[i] % 2) == 0)
        {
            iCnt++;
        }
        i++;
        CountEven(Arr, iSize);
    }
    
    return iCnt;
}

int main()
{
    int *Arr = NULL;
    int iCount = 0;
    int i = 0;
    int iRet = 0;

    cout << "Enter the number of elements : " << endl;
    cin >> iCount;

    Arr = new int[iCount];

    cout << "Enter the elements :" << endl;
    for (i = 0; i < iCount; i++)
    {
        cin >> Arr[i];
    }

    iRet = CountEven(Arr, iCount);

    cout << "Number of even elements :" << endl << iRet;

    delete[] Arr;

    return 0;
}
