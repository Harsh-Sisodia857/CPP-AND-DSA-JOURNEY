#include <iostream>
using namespace std;

struct node
{
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

// BUILD TREE USING PREORDER & INORDER

int search(int inorder[], int start, int end, int val)
{

    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == val)
            return i;
    }
    return -1;
}

// node* buildTree(int preorder[],int inorder[],int start,int end){
//     static int idx = 0;
//     if(start > end)
//         return NULL;
//     int curr = preorder[idx];
//     idx++;
//     node* n = new node(curr);
//     if(start == end)
//         return n;
//     int pos = search(inorder,start,end,curr);
//     n->left = buildTree(preorder,inorder,start,pos-1);
//     n->right = buildTree(preorder,inorder,pos+1,end);
//     return n;
// }

void inorderPrint(node *root)
{
    if (root == NULL)
        return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

// int main(int argc, char const *argv[])
// {
//     int preorder[] = {1,2,4,3,5};
//     int inorder[] = {4,2,1,5,3};
//     node* root = buildTree(preorder,inorder,0,4);
//     inorderPrint(root);
//     return 0;
// }

// BUILD TREE USING POSTORDER AND INORDER

// node *buildTree(int postorder[], int inorder[], int start, int end)
// {
//     static int idx = 4;
//     if (start > end)
//     {
//         return NULL;
//     }
//     int curr = postorder[idx];
//     idx--;
//     node* n = new node(curr);
//     if (start == end)
//         return n;
//     int pos = search(inorder, start, end, curr);
//     n->right = buildTree(postorder, inorder, pos + 1, end);
//     n->left = buildTree(postorder, inorder, start, pos - 1);
//     return n;
// }

int main(int argc, char const *argv[])
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    node* root = buildTree(postorder, inorder, 0, 4);
    inorderPrint(root);
    return 0;
}
