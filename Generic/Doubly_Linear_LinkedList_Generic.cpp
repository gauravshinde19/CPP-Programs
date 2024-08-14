/////////////////////////////////////////////////////////
//
//  Generic program for Doubly Linear LinkedList
//
/////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
struct nodeDL
{
    T data;
    struct nodeDL *next;
    struct nodeDL *prev;
};

template <class T>
class DoublyLL
{
private:
    struct nodeDL <T> * First;
    int iCount;

public:
    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

template <class T>
DoublyLL <T>::DoublyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL <T>::Display()
{
    struct nodeDL <T> * temp = First;

    if (First == NULL)
    {
        cout << "Linked List is emprty\n";
        return;
    }
    cout << "<=> ";
    while (temp != NULL)
    {
        cout << "| " << temp->data << "| <=> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

template <class T>
int DoublyLL <T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL <T>::InsertFirst(T No)
{
    struct nodeDL <T> * newn = NULL;
    newn = new struct nodeDL <T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

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
void DoublyLL <T>::InsertLast(T No)
{
    struct nodeDL <T> * newn = NULL;
    struct nodeDL <T> * temp = NULL;
    newn = new struct nodeDL <T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

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
void DoublyLL <T>::DeleteFirst()
{
    struct nodeDL <T> * temp = NULL;

    if (First == NULL)
    {
        cout << "Element cannot be deleted as LinkedList is empty\n";
        return;
    }
    else if (First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        temp = First;
        First = First->next;
        delete temp;
    }

    iCount--;
}

template <class T>
void DoublyLL <T>::DeleteLast()
{
    struct nodeDL <T> * temp = NULL;

    if (First == NULL)
    {
        cout << "Element cannot be deleted as LinkedList is empty\n";
        return;
    }
    else if (First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        temp = First;

        while (temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        
        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
}

template <class T>
void DoublyLL <T>::InsertAtPos(T No, int iPos)
{
    int i = 0;
    struct nodeDL <T> * newn = NULL;
    struct nodeDL <T> * temp = NULL;
    newn = new struct nodeDL <T>;

    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Position\n";
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == (iCount + 1))
    {
        InsertLast(No);
    }
    else
    {
        temp = First;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for (i = 1; i < (iPos - 1); i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void DoublyLL <T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeDL <T> * temp = NULL;
    // struct nodeDL <T> * temp2 = NULL;

    if ((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid Position\n";
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = First;

        for (i = 1; i < (iPos - 1); i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
    }

    iCount--;
}

int main()
{
    DoublyLL<int> *iobj = new DoublyLL<int>();
    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);
    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elements after InsertFirst : " << iRet << endl << endl;

    iobj->InsertLast(111);
    iobj->InsertLast(121);
    iobj->InsertLast(151);
    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elements after InsertLast : " << iRet << endl << endl;

    iobj->InsertAtPos(101, 4);
    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elements after InsertAtPos : " << iRet << endl << endl;

    iobj->DeleteFirst();
    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elements after DeleteFirst : " << iRet << endl << endl;

    iobj->DeleteLast();
    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elements after DeleteLast : " << iRet << endl << endl;

    iobj->DeleteAtPos(4);
    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elements after DeleteAtPos : " << iRet << endl << endl;

    return 0;
}
