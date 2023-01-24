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

Node *addTail(Node *l, int data)
{
    Node *p = l;
    while (p->next != NULL)
    {
        p = p->next;
    }
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    p->next = temp;
    return l;
}

Node *deleteBigger(Node *l, int k)
{
    Node *p = l;
    Node *ans = new Node;
    while (p != NULL)
    {
        if (p->data <= k)
        {
            ans = createNode(p->data);
            p = p->next;
            break;
        }
        p = p->next;
    }
    while (p != NULL)
    {
        if (p->data <= k)
        {
            ans = addTail(ans, p->data);
        }
        p = p->next;
    }
    return ans;
}

Node *getNode(Node *l, int k)
{
    Node *p = l;
    for (int i = 0; i < k; i++)
    {
        p = p->next;
    }
    return p;
}

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
    int n, x, k;
	cin >> n;
	cin >> x;
	Node *l = createNode(x);
	Node *p = l;
	for (int i = 1; i < n; i++){
		cin >> x;
		p = addElement(p, x);
	}
	cin >> k;
	l = deleteBigger(l, getNode(l, k)->data);
	printList(l);
    return 0;
}
