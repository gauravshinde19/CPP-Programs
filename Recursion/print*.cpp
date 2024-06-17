// Program to accept number from user and print that number of * on screen using recursion

#include <iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 0;

    if (i != iNo)
    {
        cout << "*" << endl;
        i++;
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
