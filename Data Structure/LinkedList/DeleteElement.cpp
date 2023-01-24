#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

Node *addElement(Node *p, int data)
{
    Node *temp = createNode(data);
    p->next = temp;
    return temp;
}

void printElement(Node *list)
{
    Node *p = list;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

Node *removeHead(Node *list)
{
    Node *p = list;
    p = p->next;
    delete (list);
    return p;
}

Node *removeTail(Node *list)
{
    Node *p = list;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    delete (p->next);
    p->next = NULL;
    return list;
}

Node *removeAt(Node *list, int k)
{
    Node *p = list;
    for (int i = 0; i < k - 1; i++)
    {
        p = p->next;
    }
    Node *temp = p->next;
    p->next = p->next->next;
    delete (temp);
    return list;
}

int main(int argc, char const *argv[])
{
    int n, x, k;
    cin >> n;
    cin >> x;
    Node *list = createNode(x);
    Node *p = list;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    cin >> k;
    if (k == 0)
    {
        list = removeHead(list);
    }
    else if (k == n - 1)
    {
        list = removeTail(list);
    }
    else
    {
        list = removeAt(list, k);
    }
    printElement(list);
    return 0;
}
