#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
};


int main()
{
    Node* head = new Node;
    Node* a = new Node;
    Node* b = new Node;

    head->data=0;
    a->data=1;
    b->data=2;


    head->next=a;
    a->next=b;
    b->next=nullptr;


    Node* p=head;

    while(p!=nullptr)
    {
        cout<<p->data<<" ";
        p=p->next;
    }


    return 0;
}
