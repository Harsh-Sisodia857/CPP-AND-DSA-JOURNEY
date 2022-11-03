#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Tree Traversal --> PREORDER, POSTORDER, INORDER

void preorder(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << "\t";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << "\t";
    inorder(root->right);
}

void postorder(struct Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << "\t";
}

int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}

int sumOfAllNodes(Node *root)
{
    if (root == NULL)
        return 0;
    return sumOfAllNodes(root->left) + sumOfAllNodes(root->right) + root->data;
}

int calcHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = calcHeight(root->left);
    int rh = calcHeight(root->right);
    return max(lh, rh) + 1;
}

// Sum Replacement Problem
void sumReplace(Node *root)
{
    if (root == NULL)
        return;
    sumReplace(root->left);
    sumReplace(root->right);

    if (root->left != NULL)
        root->data += root->left->data;
    if (root->right != NULL)
        root->data += root->right->data;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;
    if (isBalanced(root->left) == false)
        return false;
    if (isBalanced(root->right) == false)
        return false;
    int lh = calcHeight(root->left);
    int rh = calcHeight(root->right);
    if (abs(lh - rh) <= 1)
        return true;
    else
        return false;
}

int main(int argc, char const *argv[])
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    /*
       1
      /  \
     2    3
    */

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    /*
        1
       /  \
      2    3
     / \
    4   5
    */

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    /*
         1
       /   \
      2     3
     / \   /  \
    4   5  6   7
    */

    //   cout<<countNodes(root)<<endl<<sumOfAllNodes(root);
    // cout<<calcHeight(root);
    // sumReplace(root);
    // preorder(root);
    cout<<isBalanced(root);
    return 0;
}
