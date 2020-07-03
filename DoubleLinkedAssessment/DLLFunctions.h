#pragma once
#include <iostream>   

class DLLFunctions
{
public:
    /*
Basic Node
*/
    struct Node
    {
        int data;
        struct Node* next;
        struct Node* prev;
    };
    struct Node* head = NULL;

    int numOfNodes = 0;

    DLLFunctions();
    ~DLLFunctions();
    //Protyping

    void MakeNode(int data);

    void popFront(struct Node* next_node, int n);

    void popBack(struct Node* prev_node, int data);

    void delNode(struct Node** head_ref, struct Node* del);

    void display_dlist();

    void sort(struct Node* start);

    bool isEmpty();

    void swapNodes(Node** head_ref, int x, int y);

    void ReverseNodes();

    int numsOfNodes(struct Node* head);

};
