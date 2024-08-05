// Generic program to search last occurrence of a specific number

#include <iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T No)
{
    int i = 0;
    int iLast = 0;

    for (i = 0; i < iSize; i++)
    {
        if (arr[i] == No)
        {
            iLast = i;
        }
    }

    return iLast + 1;
}

int main()
{
    int arr[] = {10, 20, 30, 50, 40, 10, 20, 10, 10};
    float brr[] = {10.0, 3.7, 9.8, 8.7, 3.7, 8.7, 3.7};

    int iRet = 0;

    iRet = SearchLast(arr, 9, 10);
    cout << "Last Occurrence : " << iRet << endl;

    iRet = SearchLast(brr, 7, 8.7f);
    cout << "Last Occurrence : " << iRet << endl;

    return 0;
}
