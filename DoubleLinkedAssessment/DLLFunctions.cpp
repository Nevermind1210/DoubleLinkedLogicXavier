#include "DLLFunctions.h"
#include <iostream>
using namespace std;
DLLFunctions::DLLFunctions()
{

}

DLLFunctions::~DLLFunctions()
{

}

void DLLFunctions::MakeNode(int data)
{
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = head;
    
    if (head != NULL)
        head->prev = newnode;
    head = newnode;
}

void DLLFunctions::popFront(struct Node* next_node, int data)
{
    if (next_node == NULL) {
        printf("the given next node cannot be NULL");
        return;
    }

    //allocating node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    //putting data 
    new_node->data = data;

    //put in the data 
    new_node->data = data;

    //Make prev of new node as prev of next_node
    new_node->prev = next_node->prev;

    //Make the prev of next_node as new_node
    next_node->prev = new_node;

    //Prev of next_node as new_node;
    new_node->prev = new_node;

    //Next of new_node's prev node
    if (new_node->prev != NULL)
        new_node->prev->next = new_node;
}

void DLLFunctions::popBack(struct Node* prev_node, int data)
{
    if (prev_node == NULL) {
        printf("given previous node cannot BE NULL");
        return;
    }

    //allocate the node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    //place in the inputted data
    new_node->data = data;

    //make new of new node as next of prev_node
    new_node->next = prev_node->next;

    //make the next of prev_node of new_node
    prev_node->next = new_node;

    //Make prev_node as previous of new_node
    new_node->prev = prev_node;

    // change previous of new_node's next node
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

void DLLFunctions::delNode(struct Node** head_ref, struct Node* del)
{
    if (*head_ref == NULL || del == NULL)
        return;

    //if node thats being deleted is head node
    if (*head_ref == del)
        *head_ref = del->next;

    //changing next only if node thats being deleted is NOT last node
    if (del->next != NULL)
        del->next->prev = del->prev;

    //Changing prev only if node to be deleted is NOT first node
    if (del->prev != NULL)
        del->prev->next = del->next;

    //free the memory thats using del
    free(del);
    return;
}

/*
 * Display elements of Doubly Link List
 */
void DLLFunctions::display_dlist()
{
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}


void DLLFunctions::sort(struct Node* start)
{
    int swapped, i;
    struct Node* ptr1;
    struct Node* lptr = NULL;

    if (start == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                swap(ptr1->data, ptr1->next->data);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}


bool DLLFunctions::isEmpty()
{
    return numOfNodes == 0;
}

void DLLFunctions::swapNodes(Node** head_ref,int x, int y)
{
    if (x == y)
        return;

    Node** a = NULL, ** b = NULL;

    while (*head_ref) {

        if ((*head_ref)->data == x) {
            a = head_ref;
        }

        else if ((*head_ref)->data == y) {
            b = head_ref;
        }

        head_ref = &((*head_ref)->next);
    }

    //if we have both a and b
    //linked list swap current
    //pointer and next pointer of these
    if (a && b) {

        swap(*a, *b);
        swap(((*a)->next), ((*b)->next));
    }
}


/*
 * Reverse Doubly Link List
 */
void DLLFunctions::ReverseNodes()
{
    struct Node* p1, * p2;
    p1 = head;
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
    head = p1;
    cout << "List Reversed" << endl;
}

int DLLFunctions::numsOfNodes(struct Node* head)
{
    int count = 0;  // Initialize count 
    struct Node* current = head;  // Initialize current 
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}


