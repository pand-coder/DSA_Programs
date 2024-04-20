#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;
    public:
    Node(int val)
    {
        data=val;
        next=nullptr;
    }
};

class CSLL{
    Node* head;
    Node* tail;
    public:
    CSLL()
    {
        head=nullptr;
        tail=nullptr;
    }
    void display()
    {
        if(head==nullptr)
        {
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp=head;
        cout<<"Elements in the list: ";
        while(temp->next!=head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
};

int main()
{
    CSLL list;
    // Creating nodes
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);

    // Linking nodes to form a CSLL
    list.head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = list.head;

    // Displaying the CSLL
    list.display();

    return 0;
}
