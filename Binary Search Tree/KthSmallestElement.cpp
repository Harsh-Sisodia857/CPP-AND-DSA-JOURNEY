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

int kSmallest(node *root,int k,int i)
{
    if(root == NULL)
        return -1;
    int left = kSmallest(root->left,k,i);
    if(left != -1)
        return left;
    i++;
    cout << i << " ";
    if(i == k){
        return root->data;
    }
    int right = kSmallest(root->right,k,i);
        return right;
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

    cout << kSmallest(root,5,1);

    return 0;
}
