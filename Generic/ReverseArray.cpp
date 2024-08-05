// Generic program to reverse the array

#include <iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int i = 0;

    for (i = iSize-1; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 50, 40, 10, 20, 10, 10};
    float brr[] = {10.0, 3.7, 9.8, 8.7, 3.7, 8.7, 3.7};

    Reverse(arr, 9);
    cout << "\n";
    Reverse(brr, 7);

    return 0;
}
