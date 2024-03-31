#include <iostream>
#include <stack>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
class Linked_list {
private:
    Node* head;

public:
    Linked_list() {
        head = nullptr;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            cout << "List is empty, no deletion possible" << endl;
            return;
        }
        Node* temp = head;
        cout << "Popped element: " << temp->data << endl;
        head = head->next;
        delete temp;
    }

    int top() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return -1;
        }
        return head->data;
    }

    bool isempty() {
        return head == nullptr;
    }

    Node* getHead() {
        return head;
    }
};
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int main() {
    Linked_list l;
    l.push(4);
    l.push(8);
    l.push(15);
    l.push(16);
    cout << "Original Linked List: ";
    printLinkedList(l.getHead());
    reverseLinkedList(l);
    return 0;
}

