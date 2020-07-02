#include "DLLFunctions.h"
#include <iostream>
using namespace std;

DLLFunctions::DLLFunctions()
{
    headNode = nullptr;
    tailNode = nullptr;

}

DLLFunctions::~DLLFunctions()
{
    while (isEmpty() == false)
        delFirst();
}

void DLLFunctions::MakeNode(int data)
{
    struct Node* s, * temp;
    temp = new(struct Node);
    temp->data = data;
    temp->next = NULL;
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
    }
    else
    {
        s = start;
        while (s->next != NULL)
            s = s->next;
        s->next = temp;
        temp->prev = s;
    }
}

void DLLFunctions::popFront(int data)
{

}

/*
 * Display elements of Doubly Link List
 */
void DLLFunctions::display_dlist()
{
    struct Node* q;
    if (start == NULL)
    {
        cout << "List empty,nothing to display" << endl;
        return;
    }
    q = start;
    cout << "The Doubly Link List is :" << endl;
    while (q != NULL)
    {
        cout << q->data << " <-> ";
        q = q->next;
    }
    cout << "NULL" << endl;
}

void DLLFunctions::sort()
{
}


/*
 * Reverse Doubly Link List
 */
void DLLFunctions::ReverseNodes()
{
    struct Node* p1, * p2;
    p1 = start;
    p2 = p1->next;
    p1->next = NULL;
    p1->prev = p2;
    while (p2 != NULL)
    {
        p2->prev = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p2->prev;
    }
    start = p1;
    cout << "List Reversed" << endl;
}