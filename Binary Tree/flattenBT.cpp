#include<bits/stdc++.h>
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

node *predecessor(node *curr)
{
    if (curr == NULL)
        return NULL;
    curr = curr->left;
    while (curr && curr->right)
    {
        curr = curr->right;
    }
    return curr;
}

void flattenABT(node *root){
    if(root == NULL)
        return;
    node *curr = root;
    while(root){
        if(curr->left){
        node *pre = predecessor(root);
        pre->right = curr->right;
        curr->right = curr->left;
        curr->left = NULL;
        }
        curr = curr->right;
    }
}

int main()
  {
      node *root = new node(1);
      root->left = new node(2);
      root->right = new node(3);
      root->left->left = new node(4);
      root->left->right = new node(8);
      root->right->right = new node(5);
      root->right->left = new node(15);
      flattenABT(root);
      return 0;
  }