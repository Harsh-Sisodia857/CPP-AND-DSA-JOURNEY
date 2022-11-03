#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isBST(Node* &root,int min, int max){
    // Empty tree is BST
    if(root == NULL)
        return true;

    if(root->data < min || root->data > max)
        return false;

    return (isBST(root->left,min,root->data) && isBST(root->right,root->data,max));

}

int main(int argc, char const *argv[])
{
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(8);
    root->left->left = new Node(1);
    root->left->right = new Node(14);
    if(isBST(root,INT16_MIN,INT16_MAX))
        cout<<"Valid BST";
    else
        cout<<"Not Valid BST";
    return 0;
}
