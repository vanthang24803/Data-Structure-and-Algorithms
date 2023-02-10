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

DouList *addAt(DouList *l, int k, int x)
{
    Node *p = l->head;
    for (int i = 0; i < k - 1; i++)
    {
        p = p->next;
    }
    Node *temp = new Node;
    temp->data = x;
    temp->prev = p;
    temp->next = p->next;
    p->next->prev = temp;
    p->next = temp;
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
    int n, x, k;
	cin >> n;
	cin >> x;
	DouList *l = createNode(x);
	for (int i = 1; i < n; i++){
		cin >> x;
		l = addTail(l, x);
	}
	cin >> k >> x;
	if (k == 0){
		l = addHead(l, x);
	} else if (k == n){
		l = addTail(l, x);
	} else{
		l = addAt(l, k, x);
	}
	printList(l);

    return 0;
}
