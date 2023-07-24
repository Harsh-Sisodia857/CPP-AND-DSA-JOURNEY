#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inOrder(node *root, vector<node*> &inorder)
{
    if (root == NULL)
        return;
    inOrder(root->left, inorder);
    inorder.push_back(root);
    inOrder(root->right, inorder);
}

node *sortedLL(node *root)
{
    if(root == NULL)
        return NULL;
    vector<node *> inorder;
    inOrder(root, inorder);
    int n = inorder.size();
    for (int i = 0; i < n - 2; i++){
        inorder[i]->left = NULL;
        inorder[i]->right = inorder[i + 1];
    }
    // linking last node
    inorder[n - 1]->left = NULL;
    inorder[n - 1]->right = NULL;
    return inorder[0];
}

int main()
{
    node *root = new node(8);
    root->left = new node(7);
    root->right = new node(13);
    root->left->left = new node(4);
    root->right->right = new node(50);
    root->right->left = new node(11);
    node *newRoot = sortedLL(root);
    //traversing linked list
    node *temp = newRoot;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->right;
    }
    return 0;
}