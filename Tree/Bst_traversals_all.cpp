#include<iostream>
#include<queue> // Add this line to include the queue header
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val, Node* l = nullptr, Node* r = nullptr) {
        data = val;
        left = l;
        right = r;
    }
};

class BST {
public:
    Node* root;
    BST() {
        root = nullptr;
    }

    void preorder(Node* n) {
        if (n == nullptr)
            return;
        cout << n->data << " ";
        preorder(n->left);
        preorder(n->right);
    }

    void inorder(Node* n) {
        if (n == nullptr)
            return;
        inorder(n->left);
        cout << n->data << " ";
        inorder(n->right);
    }

    void postorder(Node* n) {
        if (n == nullptr)
            return;
        postorder(n->left);
        postorder(n->right);
        cout << n->data << " ";
    }

    Node* insert(Node* node, int data) {
        if (node == nullptr) {
            return new Node(data);
        }
        else if (data <= node->data) {
            node->left = insert(node->left, data);
        }
        else {
            node->right = insert(node->right, data);
        }
        return node;
    }

    void insert(int data) {
        root = insert(root, data);
    }

    void levelOrderLToR() {
        if (root == nullptr)
            return;
        else {
            queue<Node*> q;
            q.push(root);
            Node* n;

            cout << "Level-order traversal: ";
            while (!q.empty()) {
                n = q.front();
                q.pop();
                cout << n->data << " ";
                if (n->left != nullptr)
                    q.push(n->left);
                if (n->right != nullptr)
                    q.push(n->right);
            }
            cout << endl;
        }
    }
};

int main() {
    BST tree;
    tree.insert(4);
    tree.insert(2);
    tree.insert(6);
    tree.insert(1);
    tree.insert(3);
    tree.insert(5);
    tree.insert(7);

    cout << "Preorder traversal: ";
    tree.preorder(tree.root);
    cout << endl;

    cout << "Inorder traversal: ";
    tree.inorder(tree.root);
    cout << endl;

    cout << "Postorder traversal: ";
    tree.postorder(tree.root);
    cout << endl;

    tree.levelOrderLToR();

    return 0;
}
