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

node* predecessor(node *curr){
    if(curr == NULL)
        return NULL;
    curr = curr->left;
    while(curr && curr->right){
        curr = curr->right;
    }
    return curr;
}

void morrisTraversalPreorder(node *root)
{
    while (root)
    {
        // If left child is null, print the pre node data. Move to
        // right child.
        if (root->left == NULL)
        {
            cout << root->data << " ";
            root = root->right;
        }
        else
        {
            // Find inorder predecessor
            node *pre = root->left;
            while (pre->right && pre->right != root)
                pre = pre->right;

            // If the right child of inorder predecessor already points to
            // this node
            if (pre->right == root)
            {
                // linkage removal
                pre->right = NULL;
                root = root->right;
            }

            // If right child doesn't point to this node, then print this
            // node and make right child point to this node
            else
            {
                // linkage creation
                cout << root->data << " ";
                pre->right = root;
                root = root->left;
            }
        }
    }
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(8);
    root->right->right = new node(5);
    root->right->left = new node(15);

    morrisTraversalPreorder(root);
    return 0;
  }