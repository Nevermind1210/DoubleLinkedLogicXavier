#include<iostream>
#include<cstdio>
#include<cstdlib>
#include "DLLFunctions.h"

/*
 * Main: Conatins Menu
 */
int main()
{
    DLLFunctions dl;


}

/*
 * Create Double Link List
 */
//void DoubleLinkedLogic::create_list(int value)
//{
//    struct node* s, * temp;
//    temp = new(struct node);
//    temp->info = value;
//    temp->next = NULL;
//    if (start == NULL)
//    {
//        temp->prev = NULL;
//        start = temp;
//    }
//    else
//    {
//        s = start;
//        while (s->next != NULL)
//            s = s->next;
//        s->next = temp;
//        temp->prev = s;
//    }
//}
//
///*
// * Insertion at the beginning
// */
//void DoubleLinkedLogic::add_begin(int value)
//{
//    if (start == NULL)
//    {
//        cout << "First Create the list." << endl;
//        return;
//    }
//    struct node* temp;
//    temp = new(struct node);
//    temp->prev = NULL;
//    temp->info = value;
//    temp->next = start;
//    start->prev = temp;
//    start = temp;
//    cout << "Element Inserted" << endl;
//}
//
///*
// * Insertion of element at a particular position
// */
//void DoubleLinkedLogic::add_after(int value, int pos)
//{
//    if (start == NULL)
//    {
//        cout << "First Create the list." << endl;
//        return;
//    }
//    struct node* tmp, * q;
//    int i;
//    q = start;
//    for (i = 0; i < pos - 1; i++)
//    {
//        q = q->next;
//        if (q == NULL)
//        {
//            cout << "There are less than ";
//            cout << pos << " elements." << endl;
//            return;
//        }
//    }
//    tmp = new(struct node);
//    tmp->info = value;
//    if (q->next == NULL)
//    {
//        q->next = tmp;
//        tmp->next = NULL;
//        tmp->prev = q;
//    }
//    else
//    {
//        tmp->next = q->next;
//        tmp->next->prev = tmp;
//        q->next = tmp;
//        tmp->prev = q;
//    }
//    cout << "Element Inserted" << endl;
//}
//
///*
// * Deletion of element from the list
// */
//void DoubleLinkedLogic::delete_element(int value)
//{
//    struct node* tmp, * q;
//    /*first element deletion*/
//    if (start->info == value)
//    {
//        tmp = start;
//        start = start->next;
//        start->prev = NULL;
//        cout << "Element Deleted" << endl;
//        free(tmp);
//        return;
//    }
//    q = start;
//    while (q->next->next != NULL)
//    {
//        /*Element deleted in between*/
//        if (q->next->info == value)
//        {
//            tmp = q->next;
//            q->next = tmp->next;
//            tmp->next->prev = q;
//            cout << "Element Deleted" << endl;
//            free(tmp);
//            return;
//        }
//        q = q->next;
//    }
//    /*last element deleted*/
//    if (q->next->info == value)
//    {
//        tmp = q->next;
//        free(tmp);
//        q->next = NULL;
//        cout << "Element Deleted" << endl;
//        return;
//    }
//    cout << "Element " << value << " not found" << endl;
//}
//
///*
// * Display elements of Doubly Link List
// */
//void DoubleLinkedLogic::display_dlist()
//{
//    struct node* q;
//    if (start == NULL)
//    {
//        cout << "List empty,nothing to display" << endl;
//        return;
//    }
//    q = start;
//    cout << "The Doubly Link List is :" << endl;
//    while (q != NULL)
//    {
//        cout << q->info << " <-> ";
//        q = q->next;
//    }
//    cout << "NULL" << endl;
//}
//
///*
// * Number of elements in Doubly Link List
// */
//void DoubleLinkedLogic::count()
//{
//    struct node* q = start;
//    int cnt = 0;
//    while (q != NULL)
//    {
//        q = q->next;
//        cnt++;
//    }
//    cout << "Number of elements are: " << cnt << endl;
//}

