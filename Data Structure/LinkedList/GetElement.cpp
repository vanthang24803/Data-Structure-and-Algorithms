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

void printNode(Node *list)
{
    Node *p = list;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

Node *getNode(Node *list, int k)
{
    Node *p = list;
    for (int i = 0; i < k; i++)
    {
        p = p->next;
    }
    return p;
}

int main(int argc, char const *argv[])
{
    int n, x, k;
	cin >> n;
	cin >> x;
	Node *list = createNode(x);
	Node *p = list;
	for (int i = 1; i < n; i++){
		cin >> x;
		p = addElement(p, x);
	}
	cin >> k;
	p = getNode(list, k);
	cout << p->data;
    return 0;
}

