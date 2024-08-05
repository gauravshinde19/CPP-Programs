// Generic program to accept N values from user and return largest value

#include <iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    int i = 0;
    T Max = arr[0];

    for (i = 0; i < iSize; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }

    return Max;
}

int main()
{
    int arr[] = {10, 20, 30, 50, 40};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iRet = 0;
    float fRet = 0;

    iRet = Max(arr, 5);
    printf("Maximum number from Integer :\n%d\n", iRet);

    fRet = Max(brr, 4);
    printf("Maximum number from floats :\n%f\n ", fRet);

    return 0;
}
