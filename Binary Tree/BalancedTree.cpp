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

int height(Node* root){
    if(root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return (max(lh,rh) + 1);
}

bool isBalanced(Node* root){
    if(root == NULL)
        return true;
    if(isBalanced(root->left) == false )
        return false;
    if(isBalanced(root->right) == false)
        return false;
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) >= 1)
        return false;
    else
        return true;
}

int main(int argc, char const *argv[])
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);   
    root->left->right = new Node(8);
    root->right->right = new Node(5);
    root->right->left = new Node(15);
    cout<< isBalanced(root);

    return 0;
}
