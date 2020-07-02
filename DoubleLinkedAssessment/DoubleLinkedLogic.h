#pragma once
struct node
{
    int info;
    struct node* next;
    struct node* prev;
}*start;
class DoubleLinkedLogic
{
public:
    void create_list(int value);
    void add_begin(int value);
    void add_after(int value, int position);
    void delete_element(int value);
    void display_dlist();
    void count();
    void reverse();
    DoubleLinkedLogic()
    {
        start = NULL;
    }
};

