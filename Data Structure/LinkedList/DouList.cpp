#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

struct DouList
{
    Node *head, *tail;
};

DouList *createNode(int x)
{
    DouList *l = new DouList;
    l->head = new Node;
    l->head->data = x;
    l->head->prev = NULL;
    l->head->next = NULL;
    l->tail = l->head;
    return l;
}

DouList *addHead(DouList *l, int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->prev = NULL;
    temp->next = l->head;
    l->head->prev = temp;
    l->head = temp;
    return l;
}

DouList *addTail(DouList *l, int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    temp->prev = l->tail;
    l->tail->next = temp;
    l->tail = temp;
    return l;
}

void printList(DouList *l)
{
    Node *p = l->head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    DouList *l = createNode(1);
    for (int i = 2; i <= n; i++)
    {
        l = addHead(l, i);
        l = addTail(l, i);
    }
    printList(l);
    return 0;
}
