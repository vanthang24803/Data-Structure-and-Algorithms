#include <iostream>

using namespace std;

//Khai báo Node

struct Node
{
    int data;
    Node *next;
};

//Khởi tạo Node

Node *createNode(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    return temp;
}

// Thêm Phần Tử Vào Node

Node *addElement(Node *p, int x)
{
    Node *temp = createNode(x);
    p->next = temp;
    return temp;
}

//In ra List 

void printList(Node *l)
{
    Node *p = l;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n;
    cin >> x;
    Node *l = createNode(x);
    Node *p = l;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    printList(l);
    return 0;
}
