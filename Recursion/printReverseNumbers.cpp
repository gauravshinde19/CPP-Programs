// Program to accept number from user and print numbers till that number in reverse order using recursion

#include <iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo != 0)
    {
        cout << iNo << endl;
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    Display(iValue);

    return 0;
}
