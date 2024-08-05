// Generic program to search first occurrence of a specific number

#include <iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T No)
{
    int i = 0;

    for (i = 0; i < iSize; i++)
    {
        if (arr[i] == No)
        {
            return i + 1;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 50, 40, 10, 20, 10, 10};
    float brr[] = {10.0, 3.7, 9.8, 8.7, 3.7, 8.7, 3.7};

    int iRet = 0;

    iRet = SearchFirst(arr, 9, 10); // 1
    cout << "First Occurrence : " << iRet << endl;

    iRet = SearchFirst(brr, 7, 8.7f);   // 4
    cout << "First Occurrence : " << iRet << endl;

    return 0;
}
