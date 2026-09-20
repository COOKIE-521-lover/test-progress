#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
};


int main()
{
    Node a;
    Node b,c;
    a.data = 10;
    b.data = 20;
	c.data = 30;
    a.next = &b;
	b.next = &c;
    c.next = nullptr;
	Node* p = &a;
    while(p->next != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
	}

    return 0;
}
