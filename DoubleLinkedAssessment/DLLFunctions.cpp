#include "DLLFunctions.h"
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

DLLFunctions::DLLFunctions()
{
    headNode = nullptr;
    tailNode = nullptr;
}

DLLFunctions::~DLLFunctions()
{
   
}

void DLLFunctions::popFront(int newData)
{
    struct Node* newNode = new Node;
    newNode->data = newData;
    if (headNode == nullptr)
    {
        headNode = newNode;
        newNode->prevNode = nullptr;
        newNode->nextNode = nullptr;
        tailNode = newNode;
        numOfNodes++;
    }
    else
    {
        newNode->nextNode = headNode;
        newNode->prevNode = nullptr;
        headNode->prevNode = newNode;
        headNode = newNode;
        numOfNodes++;
    }
}

void DLLFunctions::popBack(int newData)
{
    struct Node* newNode = new Node;
    newNode->data = newData;
    if (headNode == nullptr)
    {
        headNode = newNode;
        newNode->prevNode = nullptr;
        newNode->nextNode = nullptr;
        tailNode = newNode;
        numOfNodes++;
    }
    else
    {
        newNode->prevNode = tailNode;
        tailNode->nextNode = newNode;
        newNode->nextNode = nullptr;
        tailNode = newNode;
        numOfNodes++;
    }
}

void DLLFunctions::delNode(int pos)
{
    struct Node* temp;
    temp = headNode;
    if (headNode == tailNode)
    {
        if (headNode->data != pos)
        {
            cout << "could not delete" << endl;
            return;
        }
        headNode = nullptr;
        tailNode = nullptr;
        delete temp;
        return;
    }
    if (headNode->data == pos)
    {
        headNode = headNode->nextNode;
        headNode->prevNode = nullptr;
        delete temp;
        return;
    }
    else if (tailNode->data == pos)
    {
        temp = tailNode;
        tailNode = tailNode->prevNode;
        tailNode->nextNode= nullptr;
        delete temp;
        return;
    }
    while (temp->data != pos)
    {
        temp = temp->nextNode;
        if (temp == nullptr)
        {
            cout << "Element not found" << endl;
            return;
        }
    }
    temp->nextNode->prevNode = temp->prevNode;
    temp->prevNode->nextNode = temp->nextNode;
    delete temp;
}

void DLLFunctions::delFirst()
{
    if (headNode == nullptr){
        return;
    }

    if (headNode == tailNode)///one element in the list
    {
        struct Node* cur;
        cur = headNode;
        headNode = nullptr;
        tailNode = nullptr;
        delete cur;
        numOfNodes--;
        return;
    }
    else
    {
        struct Node* cur;
        cur = headNode;
        headNode = headNode->nextNode;
        headNode->prevNode = nullptr;
        delete cur;
        numOfNodes--;
        return;
    }
}

void DLLFunctions::delLast()
{
    if (headNode == nullptr) {
        return;
    }

    if (headNode == tailNode)
    {
        struct Node* cur;
        cur = headNode;
        headNode = nullptr;
        tailNode = nullptr;
        delete cur;
        numOfNodes--;
        return;
    }
    else
    {
        struct Node* cur;
        cur = tailNode;
        tailNode = tailNode->prevNode;
        tailNode->nextNode = nullptr;
        numOfNodes--;
        delete cur;
        return;
    }
}

/*
 * Display elements of Doubly Link List
 */
void DLLFunctions::display_dlist()
{
    struct Node* temp;
    temp = headNode;
    while (temp != nullptr)
    {
        printf("%d->", temp->data);
        temp = temp->nextNode;
    }
    puts("");
}


void DLLFunctions::Bsort()
{
    Node* currentNode;
    //sets current node = head node for the loop
    currentNode = headNode;
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        currentNode = headNode;

        //loop through number of nodes
        for (int i = 0; i < numOfNodes; i++)
        {
            if (currentNode->nextNode != nullptr)
            {
                if (currentNode->data > currentNode->nextNode->data)	 
                {
                    sorted = false;
                    swapNodes(currentNode, currentNode->nextNode);
                }
                else
                {
                    currentNode->nextNode->prevNode = currentNode;
                    currentNode = currentNode->nextNode;
                }
            }
        }
    }
}


bool DLLFunctions::isEmpty()
{
    return numOfNodes == 0;
}

void DLLFunctions::HowManyNodesExists()
{
    cout << "The number of nodes that exist:" << numOfNodes << " exists" << endl;
}

void DLLFunctions::swapNodes(Node* a, Node* b)
{
    if (a == b)
    {
        return;
    }
    // if swapping tailNode
    if (b->nextNode == nullptr)
    {
        tailNode = a;
        a->prevNode->nextNode = b;
        b->prevNode = a->prevNode;
        a->prevNode = b;
        a->nextNode = b->nextNode;
        b->nextNode = a;
    }
    // if swapping Node isnt headNode or tailNode
    else if (a->prevNode != nullptr)
    {
        a->prevNode->nextNode = b;
        b->prevNode = a->prevNode;
        a->prevNode = b;
        a->nextNode = b->nextNode;
        b->nextNode = a;
    }
    // if swapping headNode
    else if (a->prevNode == nullptr)
    {
        headNode = b;
        if (b == tailNode)
        {
            tailNode = a;
        }
        b->prevNode = nullptr;
        a->prevNode = b;
        a->nextNode = b->nextNode;
        b->nextNode = a;
    }
}

int DLLFunctions::numsOfNodes(struct Node* head)
{
    int count = 0;  // Initialize count 
    struct Node* current = head;  // Initialize current 
    while (current != nullptr)
    {
        count++;
        current = current->nextNode;
    }
    return count;
}

void DLLFunctions::Error()
{
    cout << "Put in the correct input dummy!" << endl;
    system("pause");
    cin.clear();
    cin.ignore(cin.rdbuf()->in_avail());
}
