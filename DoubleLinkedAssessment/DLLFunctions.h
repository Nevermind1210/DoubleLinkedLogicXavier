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
        struct Node* nextNode;
        struct Node* prevNode;
    };
    struct Node* headNode;
    struct Node* tailNode;
    

    int numOfNodes = 0;

    DLLFunctions();
    ~DLLFunctions();
    //Protyping

    void popFront(int data);

    void popBack(int newData);

    void delNode(int pos);

    void delFirst();

    void delLast();

    void display_dlist();

    void Bsort();

    bool isEmpty();

    void HowManyNodesExists();

    void swapNodes(Node* x, Node* y);

    int numsOfNodes(struct Node* head);

    void Error();

};
