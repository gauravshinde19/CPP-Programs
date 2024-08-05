// Generic program to accept N values from user and return smallest value

#include <iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    int i = 0;
    T Min = arr[0];

    for (i = 0; i < iSize; i++)
    {
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }

    return Min;
}

int main()
{
    int arr[] = {10, 20, 30, 50, 40};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iRet = 0;
    float fRet = 0;

    iRet = Min(arr, 5);
    printf("Smallest number from Integer :\n%d\n", iRet);

    fRet = Min(brr, 4);
    printf("Smallest number from floats :\n%f\n ", fRet);

    return 0;
}
