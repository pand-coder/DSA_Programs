#include<iostream>
using namespace std;
class Node{
    char data;
    Node* left,right;
    public:
    Node(char val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
class Tree{
    public:
    Node* root; //rootnode//
    Tree()
    {
        root=nullptr;
    }
    //Depth First Traversal//
    //preorder traversal//
    //root->left->right//
    void preorder(Node* n1)
    {
        if(node==nullptr) //base order 
        return;
        cout<<node->data<<" ";
        preorder(node->data);
        preorder(node->right);
    }
    Node* insert(Node* node,char val)
    {
        if(node==nullptr) //base case get's executed when u reach leaf node//
        {
            return new node(val);
        }

    }
};


