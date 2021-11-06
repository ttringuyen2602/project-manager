#include <iostream>
#include "Customer.h"

using namespace std;

typedef Customer Item;

struct Node
{
    Item data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;
    Node *tail;
    long size;

public:
    LinkedList();
    ~LinkedList();

    Node *createNode(Item v);
    void addFirst(Item v);
    void addLast(Item v);
    void insertAfter(Node *p, Item v);
    void insertBefore(Node *p, Item v);
    void removeFirst();
    void removeLast();
    void remove(Node *p);
    void traverse() const;
    Node *previous(Node *p);
};

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
    size = 0;
}

LinkedList::~LinkedList()
{
    delete head;
    delete tail;
}

Node *LinkedList::createNode(Item v)
{
    Node *p = new Node;
    p->data = v;
    p->next = NULL;
    return p;
}

void LinkedList::addFirst(const Item v)
{
    Node *p = createNode(v);
    p->next = head;
    head = p;
    size++;
}
void LinkedList::addLast(Item v)
{
    Node *p = createNode(v);
    if (size == 0)
    {
        head = p;
        tail = p;
    }
    else
    {
        tail->next = p;
        tail = p;
    }
    size++;
}

Node *LinkedList::previous(Node *p)
{
    Node *t = head;
    while (t->next != p)
        t = t->next;
    return t;
}

void LinkedList::insertAfter(Node *p, Item v)
{
    if (p == tail)
        addLast(v);
    else
    {
        Node *q = createNode(v);
        q->next = p->next;
        p->next = q;
    }
    size++;
}

void LinkedList::insertBefore(Node *p, Item v)
{
    if (p == head)
        addFirst(v);
    else
    {
        Node *pre = previous(p);
        insertAfter(pre, v);
    }
}

void LinkedList::removeFirst()
{
    if (size == 0)
        cout << "Khong co gi de xoa!" << endl;
    else
    {
        Node *t = head;
        head = head->next;
        delete t;
        size--;
    }
}

void LinkedList::traverse() const
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << "\t";
        p = p->next;
    }
    cout << endl;
    delete p;
}

int search(Node *head, Item v)
{
    Node *current = head; // Initialize current
    while (current != NULL)
    {
        if (current->data == v)
            return true;
        current = current->next;
    }
    return false;
}