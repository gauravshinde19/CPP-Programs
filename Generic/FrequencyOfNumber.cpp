// Generic program to return frequency of a specific number

#include <iostream>
using namespace std;

template <class T>
int Frequency(T *arr, int iSize, T No)
{
    int i = 0;
    int iCnt = 0;

    for (i = 0; i < iSize; i++)
    {
        if (arr[i] == No)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int main()
{
    int arr[] = {10, 20, 30, 50, 40, 10, 20, 10, 10};
    float brr[] = {10.0, 3.7, 9.8, 8.7, 3.7, 8.7, 3.7};

    int iRet = 0;

    iRet = Frequency(arr, 9, 10);
    cout << "Frequency : " << iRet << endl;

    iRet = Frequency(brr, 7, 3.7f);
    cout << "Frequency : " << iRet << endl;

    return 0;
}
