/////////////////////////////////////////////////////////
//
//  Generic program for Singly Circular LinkedList
//
/////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
struct nodeSC
{
    T data;
    struct nodeSC *next;
};

template <class T>
class SinglyCircularLL
{
private:
    struct nodeSC <T> * First;
    struct nodeSC <T> * Last;
    int iCount;

public:
    SinglyCircularLL();

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
SinglyCircularLL <T>::SinglyCircularLL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCircularLL <T>::Display()
{
    if (First == NULL && Last == NULL)
    {
        cout << "Linked List is emprty\n";
        return;
    }

    cout << "-> ";
    do
    {
        cout << "| " << First->data << " | -> ";
        First = First->next;
    } while (Last->next != First);

    cout << "\n";
}

template <class T>
int SinglyCircularLL <T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCircularLL <T>::InsertFirst(T No)
{
    struct nodeSC <T> * newn = NULL;

    newn = new struct nodeSC <T>;

    newn->data = No;
    newn->next = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    Last->next = First;

    iCount++;
}

template <class T>
void SinglyCircularLL <T>::InsertLast(T No)
{
    struct nodeSC <T> * newn = NULL;

    newn = new struct nodeSC <T>;

    newn->data = No;
    newn->next = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = newn;
    }
    Last->next = First;

    iCount++;
}

template <class T>
void SinglyCircularLL <T>::InsertAtPos(T No, int iPos)
{
    int i = 0;
    struct nodeSC <T> * newn = NULL;
    struct nodeSC <T> * temp = NULL;

    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Position\n";
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

        newn = new struct nodeSC <T>;
        newn->data = No;
        newn->next = NULL;

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
void SinglyCircularLL <T>::DeleteFirst()
{
    if (First == NULL && Last == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCircularLL <T>::DeleteLast()
{
    if (First == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }

    if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        struct nodeSC <T> * temp = First;

        while (temp->next != Last)
        {
            temp = temp->next;
        }

        delete Last;

        Last = temp;
        Last->next = First;
    }

    iCount--;
}

template <class T>
void SinglyCircularLL <T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeSC <T> * temp1 = NULL;
    struct nodeSC <T> * temp2 = NULL;

    if ((iPos < 1) || (iPos > iCount + 1))
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
        temp1 = First;

        for (i = 1; i < (iPos - 1); i++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }
}

int main()
{
    SinglyCircularLL <int> *iobj = new SinglyCircularLL <int>();
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
