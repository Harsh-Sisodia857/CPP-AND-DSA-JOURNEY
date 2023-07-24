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

void inOrder(node* root,vector<int> &inorder){
    if(root == NULL)
        return;
    inOrder(root->left, inorder);
    inorder.push_back(root->data);
    inOrder(root->right, inorder);
}

bool twoSum(node *root,int target){
    vector<int> inorder;
    inOrder(root, inorder);
    cout << "INORDER : ";
    for(auto it : inorder)
        cout << it << " ";
    cout << endl;
    int i = 0, j = inorder.size() - 1;
    int sum = 0;
    while(i < j){
        sum = inorder[i] + inorder[j];
        cout << sum << " ";
        if (sum == target)
            return true;
        else if(sum > target){
            j--;
        }
        else
            i++;
    }
    return false;
}

int main()
{
    node *root = new node(8);
    root->left = new node(7);
    root->right = new node(13);
    root->left->left = new node(4);
    root->right->right = new node(50);
    root->right->left = new node(11);
    cout <<endl<< twoSum(root, 11);
    return 0;
}