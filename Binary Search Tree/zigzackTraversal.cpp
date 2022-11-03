#include <iostream>
#include <stack>
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

void zigzagTraversal(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> currLevel;
    stack<Node *> nextLevel;
    bool leftToRight = true;

    currLevel.push(root);
    while (!currLevel.empty())
    {
        Node *temp = currLevel.top();
        currLevel.pop();
        if (temp)
        {
            cout << temp->data << " ";
        // left to right
            if (leftToRight)
            {
                if (temp->left)
                    nextLevel.push(temp->left);
                if (temp->right)
                    nextLevel.push(temp->right);
            }

            // right to left
            else
            {
                if (temp->right)
                {
                    nextLevel.push(temp->right);
                }
                if (temp->left)
                    nextLevel.push(temp->left);
            }
            if (currLevel.empty())
            {
                leftToRight = !leftToRight;
                swap(currLevel, nextLevel);
            }
        }
    }
}
    int main(int argc, char const *argv[])
    {
        Node *root = new Node(7);
        root->left = new Node(4);
        root->right = new Node(8);
        root->left->left = new Node(3);
        root->left->right = new Node(5);
        root->right->right = new Node(9);
        zigzagTraversal(root);
        return 0;
    }
