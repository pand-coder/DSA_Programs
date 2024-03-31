#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
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

    void insert_node_at_beginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void reverse() {
        if (head == nullptr || head->next == nullptr) {
            return;
        }

        Node* prenode = nullptr;
        Node* currnode = head;

        while (currnode != nullptr) {
            Node* nextnode = currnode->next;
            currnode->next = prenode;
            prenode = currnode;
            currnode = nextnode;
        }

        head = prenode;
    }

    void traversal_print() {
        Node* ptr = head;
        while (ptr != nullptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main() {
    Linked_list ll;
    ll.insert_node_at_beginning(4);
    ll.insert_node_at_beginning(8);
    ll.insert_node_at_beginning(15);
    ll.insert_node_at_beginning(16);

    cout << "Original linked list: ";
    ll.traversal_print();

    ll.reverse();

    cout << "Reversed linked list: ";
    ll.traversal_print();

    return 0;
}
