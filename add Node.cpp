#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* a = new Node;
    Node* b = new Node;
    Node* c = new Node;

    a->data = 1;
    b->data = 3;
    c->data = 5;

    a->next = b;
    b->next = c;
    c->next = nullptr;

    Node* head = a;

    // 插入2
    Node* p = new Node;
    p->data = 2;

    p->next = a->next;
    a->next = p;

    // 遍历
    Node* cur = head;

    while(cur != nullptr)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }

    return 0;
}
