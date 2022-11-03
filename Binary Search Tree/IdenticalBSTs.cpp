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

bool isBstIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    else
    {
        bool cond1 = (root1->data == root2->data);
        bool cond2 = isBstIdentical(root1->left, root2->left);
        bool cond3 = isBstIdentical(root1->right, root2->right);
        if (cond1 && cond2 && cond3)
            return true;
        else
            return false;
    }
}

int main(int argc, char const *argv[])
{
    Node *root1 = new Node(7);
    root1->left = new Node(4);
    root1->right = new Node(8);
    root1->left->left = new Node(3);
    root1->left->right = new Node(5);
    root1->right->right = new Node(9);

    Node *root2 = new Node(7);
    root2->left = new Node(4);
    root2->right = new Node(18);
    root2->left->left = new Node(3);
    root2->left->right = new Node(5);
    root2->right->right = new Node(9);

    cout<<isBstIdentical(root1,root2);
    return 0;
}
