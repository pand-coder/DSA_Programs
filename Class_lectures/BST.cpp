#include<iostream>
#include<string>
using namespace std;

int strlen(string s)
{
    int i=0;
    for(;s[i++]!=0;);
    return i-1; // Subtract 1 to exclude the null terminator
}

bool strcmp(string a,string b)
{
    int i=0;
    for(;i<strlen(a)&&a[i]==b[i];i++);
    return i==strlen(a); // Return true only if all characters match
}

class BSTNode{
public:
    string data;
    BSTNode* left; // Corrected the Node* to BSTNode*
    BSTNode* right; // Corrected the Node* to BSTNode*
    
    BSTNode(string d,BSTNode* l=nullptr,BSTNode* r=nullptr) // Added default arguments for left and right
    {
        data=d;
        left=l;
        right=r;
    }
};

class BST{
public:
    BSTNode* root; // Root node

    BST()
    {
        root=nullptr;
    }

    void insertion(string d)
    {
        BSTNode* n=new BSTNode(d); // Initialize left and right child as nullptr
        BSTNode* temp=root;
        if(root==nullptr) //if tree is empty (inserting the 1st node into tree)
        {
            root=n;
            return; // Added return statement
        }
        else 
        {
            while(temp!=nullptr)
            {
                if(strcmp(temp->data,d)) // Use strcmp directly for comparison
                {
                    if(temp->right==nullptr)
                    {
                        temp->right=n;
                        return; // Added return statement
                    }
                    temp=temp->right;
                }
                else // if(strcmp(temp->data,d)>0)  // Use else instead of else if
                {
                    if(temp->left==nullptr) // Corrected to left
                    {
                        temp->left=n;
                        return; // Added return statement
                    }
                    temp=temp->left;
                }
            }
        }
    }

    void printInorder(BSTNode* node)
    {
        if(node == nullptr)
            return;
        printInorder(node->left);
        cout << node->data << " ";
        printInorder(node->right);
    }

    void print()
    {
        printInorder(root);
        cout << endl;
    }
};

int main() {
    BST tree;
    tree.insertion("b");
    tree.insertion("a");
    tree.insertion("c");
    tree.print(); // Added to print the BST inorder traversal
    return 0;
}
