#include<iostream>
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

class Linkedlist {
private:
    Node* head;
    Node* tail;
public:
    Linkedlist() {
        head = nullptr;
        tail = nullptr;
    }

    void insert_at_head(int value) {
        Node* n = new Node(value);
        n->next = head;
        head = n;
        if (tail == nullptr)
            tail = n;
    }

    void insert_at_tail(int value) {
        Node* n = new Node(value);
        if (head == nullptr) {
            head = n;
            tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }
    }

    void insert_at_k(int k, int value) {
        if (k < 1) return;
        if (k == 1) {
            insert_at_head(value);
            return;
        }

        Node* current = head;
        for (int i = 1; i < k - 1 && current != nullptr; ++i) {
            current = current->next;
        }

        if (current == nullptr) return;

        Node* newNode = new Node(value);
        newNode->next = current->next;
        current->next = newNode;
    }

    void insert_at_middle(int value, int position) {
        Node* newNode = new Node(value);
        if (position <= 0) {
            cout << "Invalid position" << endl;
            delete newNode;
            return;
        }

        if (head == nullptr) {
            insert_at_head(value);
            return;
        }

        Node* tmp = head;
        for (int i = 1; i < position && tmp != nullptr; ++i) {
            tmp = tmp->next;
        }

        if (tmp == nullptr) {
            cout << "Invalid position" << endl;
            delete newNode;
            return;
        }

        newNode->next = tmp->next;
        tmp->next = newNode;
    }

    void delete_at_beginning() {
        if (head == nullptr) {
            cout << "List is empty cannot delete" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void delete_at_end() {
        if (head == nullptr) return;
        if (head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
            return;
        }

        Node* ptr = head;
        while (ptr->next != tail) {
            ptr = ptr->next;
        }
        delete tail;
        tail = ptr;
        tail->next = nullptr;
    }

    void delete_at_middle(int position) {
        if (position <= 0 || head == nullptr) {
            cout << "Invalid position or empty list" << endl;
            return;
        }

        if (position == 1) {
            delete_at_beginning();
            return;
        }

        Node* temp = head;
        for (int i = 0; i < position - 2 && temp != nullptr; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Linkedlist list;
    list.insert_at_head(3);
    list.insert_at_head(2);
    list.insert_at_head(1);
    list.display();

    list.insert_at_tail(4);
    list.display();

    list.insert_at_k(3, 2);
    list.display();

    list.insert_at_middle(5, 2);
    list.display();

    list.delete_at_beginning();
    list.display();

    list.delete_at_end();
    list.display();

    list.delete_at_middle(2);
    list.display();

    return 0;
}

