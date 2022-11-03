#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

//Tree Traversal --> PREORDER, POSTORDER, INORDER

void preorderPrint(struct Node* root){
    if(root == NULL)
        return;
    cout<<root->data<<"\t";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

void inorderPrint(struct Node* root){
    if(root == NULL)
        return;
    inorderPrint(root->left);
    cout<<root->data<<"\t";
    inorderPrint(root->right);
}

void postorderPrint(struct Node* root){
    if(root == NULL)
        return;
    postorderPrint(root->left);
    postorderPrint(root->right);
    cout<<root->data<<"\t";
}

//  BUILDING TREE USING INORDER AND PREORDER

// int search(int inorder[],int start,int end, int curr)
// {
//     for(int i = start; i<=end; i++){
//         if(inorder[i] == curr)
//             return i;
//     }
//     return -1;
// }

// Node* buildTree(int preorder[],int inorder[],int start,int end){
//     static int idx = 0;
//     if(start > end)
//         return NULL;
//     int curr = preorder[idx];
//     idx++;
//     Node* node = new Node(curr);
//     // When inorder array consist of a single element then that element is leaf node so we simply return that node
//     if(start == end)
//         return node;
//     // Finding position of Parent Node in Inorder
//     int pos = search(inorder,start,end,curr);
//     //Firstly Building Left Subtree
//     node->left = buildTree(preorder,inorder,start,pos-1);
//     //Secondly Building Right Subtree
//     node->right = buildTree(preorder,inorder,pos+1,end);
//     return node;
// }

// int main(int argc, char const *argv[])
// {   
//     // Build tree using Preorder and inorder
//     int preorder[] = {1,2,4,3,5};
//     int inorder[] ={4,2,1,5,3};

//     //build tree
//     Node* root = buildTree(preorder,inorder,0,4);
//     inorderPrint(root);
//     return 0;
// }

// BUILDING TREE USING INORDER AND POSTORDER

int search(int inorder[],int start,int end, int curr)
{
    for(int i = start; i<=end; i++){
        if(inorder[i] == curr)
            return i;
    }
    return -1;
}

Node* buildTree(int postorder[],int inorder[],int start,int end){
    static int idx = 4; // Last element index in postorder
    if(start>end){
        return NULL;
    }
    int val = postorder[idx];
    idx--;
    Node* curr = new Node(val);
    if(start == end){
        return curr;        
    }

    int pos = search(inorder,start,end,val);
    curr->right = buildTree(postorder,inorder,pos+1,end);
    curr->left = buildTree(postorder,inorder,start,pos-1);

    return curr;
}

int main(int argc, char const *argv[])
{
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};

    //build tree
    Node* root = buildTree(postorder,inorder,0,4);
    postorderPrint(root);
    return 0;
}
