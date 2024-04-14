#include<iostream>
using namespace std;
class Node{
     public:
        Node* prev;
        int data;
        Node* next;
        Node(int val)
        {
            data=val;
            prev=nullptr;
            next=nullptr;
        }

};
class DLL{
    private:
    Node* head;
    Node* tail;
    public:
    DLL()
    {
        head=nullptr;
        tail=nullptr;
    }
void insert_at_beginning(int val)
{
    Node* n = new Node(val);  // Create a new node and assign the value to it.
    if (head == nullptr)  // Check whether the list is empty or not.
    {
        head = n;
        tail = n;
    }
    else
    {
        n->next = head;
        head->prev = n;
        head = n;
    }
}
};
int main(void){
DLL 
}
