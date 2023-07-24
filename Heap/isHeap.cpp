#include<bits/stdc++.h>
using namespace std;

class node
{   public : 
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


bool CBT(node *root,int countNode,int idx){
    if(root == NULL)
        return true;
    if(idx >= countNode)
        return false;
    bool left = CBT(root->left, countNode, 2 * idx + 1);
    bool right = CBT(root->right, countNode, 2 * idx + 2);
    return (left && right);
}

bool isMaxOrder(node *root){
    // leaf node
    if(root->left == NULL && root->right == NULL)
        return true;
    if(root->right == NULL && root->left->data < root->data)
        return true;
    if (root->left && root->right && root->left->data < root->data && root->right->data < root->data)
    {
        bool left = isMaxOrder(root->left);
        bool right = isMaxOrder(root->right);
        return (left && right);
    }
    return false;
}

int count(node *root)
{
    if (root == NULL)
        return 0;
    return (count(root->left) + count(root->right) + 1);
}
bool isHeap(node *root,int index){
    if(root == NULL)
        return true;
    int countNode = count(root);
    return CBT(root, countNode,0) && isMaxOrder(root);
}

int main(){
    node *root = new node(10);
    root->left = new node(25);
    root->right = new node(30);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << isHeap(root,0);
    return 0;
  }