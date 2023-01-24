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
    temp->next = NULL;
    temp->data = data;
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

Node *addElement(Node *p, int data)
{
    Node *temp = createNode(data);
    p->next = temp;
    return temp;
}

Node *addHead(Node *list, int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = list;
    list = temp;
    return list;
}

Node *addAt(Node *list, int k, int data)
{
    Node *p = list;
    for (int i = 0; i < k - 1; i++)
    {
        p = p->next;
    }
    Node *temp = new Node;
    temp->data = data;
    temp->next = p->next;
    p->next = temp;
    return list;
}

Node *addTail(Node *list, int data)
{
    Node *p = list;
    while (p->next != NULL)
    {
        p = p->next;
    }
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    p->next = temp;
    return list;
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
	cin >> k >> x;
	if (k == 0){
		list = addHead(list, x);	
	} else if (k == n){
		list = addTail(list, x);
	} else{
		list = addAt(list, k, x);
	}
	printNode(list);
    return 0;
}
