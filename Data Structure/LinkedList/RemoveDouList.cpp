#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
};

struct DouList
{
    Node *head, *tail;
};

DouList *creatNode(int x)
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

DouList *removeHead(DouList *l)
{
    Node *p = l->head->next;
    Node *temp = l->head;
    p->prev = NULL;
    l->head = p;
    delete (temp);
    return l;
}

DouList *removeTail(DouList *l)
{
    Node *p = l->tail->prev;
    Node *temp = l->tail;
    p->next = NULL;
    l->tail = p;
    delete (temp);
    return l;
}

DouList *removeAt(DouList *l, int k)
{
    Node *p = l->head;
    for (int i = 0; i < k - 1; i++)
    {
        p = p->next;
    }
    Node *temp = p->next;
    Node *p2 = temp->next;
    p->next = p2;
    p2->prev = p;
    delete (temp);
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
	DouList *l = creatNode(x);
	for (int i = 1; i < n; i++){
		cin >> x;
		l = addTail(l, x);
	}
	cin >> k;
	if (k == 0){
		l = removeHead(l);
	} else if (k == n-1){
		l = removeTail(l);
	} else {
		l = removeAt(l, k);
	}
	printList(l);
    return 0;
}
