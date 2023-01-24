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

Node *convert(Node *l, int a, int b)
{
    Node *p = l;
    while (p != NULL)
    {
        if (p->data == a)
        {
            p->data = b;
        }
        p = p->next;
    }
    return l;
}

void printNode(Node *l)
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
    int n, x, a, b;
	cin >> n;
	cin >> x;
	Node *l = createNode(x);
	Node *p = l;
	for (int i = 1; i < n; i++){
		cin >> x;
		p = addElement(p, x);
	}
	cin >> a >> b;
	l = convert(l, a, b);
	printNode(l);
    return 0;
}

