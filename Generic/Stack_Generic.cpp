///////////////////////////////////
//
//  Generic program for Stack
//
///////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Stack
{
private:
    struct node <T> * First;
    int iCount;

public:
    Stack();

    void Display();
    int Count();

    void Push(T No);
    int Pop();
};

template <class T>
Stack <T>::Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Stack <T>::Display()
{
    cout << "Elements of stack are : \n";
    struct node <T> * temp = First;

    while (temp != NULL)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
    cout << "\n";
}

template <class T>
int Stack <T>::Count()
{
    return iCount;
}

template <class T>
void Stack <T>::Push(T No)
{
    struct node <T> * newn = NULL;

    newn = new struct node <T>;

    newn->data = No;
    newn->next = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

template <class T>
int Stack <T>::Pop()
{
    int iValue = 0;
    struct node <T> * temp = NULL;

    if (First == NULL)
    {
        cout << "Unable to pop the element as stack is empty\n";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First->data;
        First = First->next;
        delete temp;

        iCount--;
    }

    return iValue;
}

int main()
{
    Stack <int> *isobj = new Stack<int>();
    int iRet = 0;

    isobj->Push(10);
    isobj->Push(20);
    isobj->Push(30);
    isobj->Push(40);

    isobj->Display();
    iRet = isobj->Count();
    cout << "Number of elements in the stack : " << iRet << "\n";

    iRet = isobj->Pop();
    cout << "Poped element : " << iRet << "\n";

    iRet = isobj->Pop();
    cout << "Poped element : " << iRet << "\n";

    isobj->Display();
    iRet = isobj->Count();
    cout << "Number of elements in the stack : " << iRet << "\n";

    isobj->Push(50);
    isobj->Display();
    iRet = isobj->Count();
    cout << "Number of elements in the stack : " << iRet << "\n";

    return 0;
}
