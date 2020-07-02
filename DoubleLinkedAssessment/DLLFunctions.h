#pragma once
#include <iostream>    
/*
Basic Node
*/
    struct Node
    {
        int data;
        struct Node* next;
        struct Node* prev;
    }*start;
Node* headNode;
Node* tailNode;

int numOfNodes = 0;

class DLLFunctions
{
public:
    DLLFunctions();
    ~DLLFunctions();
//Protyping

    void MakeNode(int data);

    void popFront(int data);

    void popBack(int data);

    void delNode(int pos);

    void display_dlist();

    void delFirst();

    void sort();

    void delLast();

    bool isEmpty();

    void swapNodes(Node* a, Node* b);

    void noErrors();

    void ReverseNodes();

    void numsOfNodes();

    DLLFunctions()
    {
        start = NULL;
    }
};
