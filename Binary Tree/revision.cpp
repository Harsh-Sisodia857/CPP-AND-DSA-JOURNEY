#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// tree traversal
void preOrder(node *root){
    if(root != NULL){
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}


int search(int inorder[],int start,int end,int curr){
    for (int i = start; i <= end; i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

// build tree using preorder and inorder

// node* buildTree(int preorder[],int inorder[],int start,int end){
//     static int idx = 0;
//     if(start > end){
//         return NULL;
//     }
//     int curr = preorder[idx];
//     idx++;
//     node *newnode = new node(curr);
//     if(start == end)
//         return newnode;
//     int pos = search(inorder, start, end, curr);
//     newnode->left = buildTree(preorder, inorder, start, pos - 1);
//     newnode->right = buildTree(preorder, inorder, pos + 1, end);
//     return newnode;
// }

// build tree using postorder and inorder

node* buildTree(int postorder[],int inorder[],int start,int end){
    static int idx = 4;
    if(start > end)
        return NULL;
    int curr = postorder[idx];
    idx--;
    node *newNode = new node(curr);
    if(start == end){
        return newNode;
    }
    int pos = search(inorder, start, end,curr);
    newNode->left = buildTree(postorder, inorder, start, pos - 1);
    newNode->right = buildTree(postorder, inorder, pos + 1, end);
    return newNode;
}


int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    // build tree
    node *root = buildTree(postorder, inorder, 0, 4);
    preOrder(root);
    return 0;
}