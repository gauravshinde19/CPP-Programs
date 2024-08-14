/////////////////////////////////
//
//  Generic program for Queue
//
/////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
struct node
{
    int data;
    struct node *next;
};

template <class T>
class Queue
{
private:
    struct node<T> *First;
    int iCount;

public:
    Queue();

    void Display();
    int Count();

    void EnQueue(T No);
    int DeQueue();
};

template <class T>
Queue<T>::Queue()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Queue<T>::Display()
{
    cout << "Elements of Queue are : \n";
    struct node<T> *temp = First;

    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << "\n";
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}

template <class T>
void Queue<T>::EnQueue(T No)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    newn = new struct node<T>;

    newn->data = No;
    newn->next = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
    iCount++;
}

template <class T>
int Queue<T>::DeQueue()
{
    int iValue = 0;
    struct node<T> *temp = NULL;

    if (First == NULL)
    {
        cout << "Unable to remove the element as queue is empty\n";
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
    Queue<int> *iqobj = new Queue<int>();
    int iChoice = 0;
    int iNo = 0;

    cout << "----------- Implementaion of Queue -----------\n";
    while (iChoice != 5)
    {
        cout << "Please select your choice : \n";
        cout << "1 : Insert new element in Queue\n";
        cout << "2 : Remove the element from Queue\n";
        cout << "3 : Display the elements form Queue\n";
        cout << "4 : Count number of elements in Queue\n";
        cout << "5 : Exit\n";
        cin >> iChoice;

        switch (iChoice)
        {
        case 1:
            cout << "Enter the element that you want to insert : \n";
            cin >> iNo;
            iqobj->EnQueue(iNo);
            break;

        case 2:
            iNo = iqobj->DeQueue();
            if (iNo != -1)
            {
                cout << "Removed element from Queue is : " << iNo << "\n";
            }
            break;

        case 3:
            iqobj->Display();
            break;

        case 4:
            iNo = iqobj->Count();
            cout << "Number of elements in Queue are : " << iNo << "\n";
            break;

        case 5:
            cout << "Thank you for using our application\n";
            break;
        }
    }

    return 0;
}
