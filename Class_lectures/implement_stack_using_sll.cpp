#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data=value;
        next=nullptr;
    }
};
class Linked_list{
    private:
    Node* head;
    public:
    Linked_list()
        {
            head=nullptr;
        }
    void push(int val)
    {
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }
int pop()
{
    if (head == nullptr)
    {
        cout << "List is empty no deletion possible";
        return -1;
    }
    Node* temp = head;
    cout << "Popped element: " << temp->data << endl;
    head = head->next;
    delete temp;
}

    int top()
    {
        if(head==nullptr)
        {
            cout<<"List is empty";
            return -1;
        }
        return head->data;
    }
    bool isempty()
    {
        return head==nullptr;
    }
};
int main()
{
Linked_list l;
l.push(4);
l.push(8);
l.push(15);
l.push(16);
 cout << "Top element: " << l.top() << endl;
    cout << "Popped element: " << l.pop() << endl;
    cout << "Top element after pop: " << l.top() << endl;
}
