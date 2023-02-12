#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int x){
    Node *temp = new Node;
    temp->next = temp;
    temp->data = x; 
    return temp;
}
void printList(Node *l, int k){
	Node *p = l;
	for (int i = 0; i < k; i++){
		p = p->next;
	}
	cout << p->data << " ";
	Node *p2 = p->next;
	while (p2 != p){
		cout << p2->data << " ";
		p2 = p2->next;
	}
}
Node *addTail(Node *l, int x){
	Node *p = l;
	while (p->next != l){
		p = p->next;
	}
	Node *temp = new Node;
	temp->data = x;
	temp->next = l;
	p->next = temp;
	return l;
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
		l = addTail(l, x);
	}
	cin >> k;
	printList(l, k);
    return 0;
}
