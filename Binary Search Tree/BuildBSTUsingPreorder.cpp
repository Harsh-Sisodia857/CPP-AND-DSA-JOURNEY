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

Node* BuildBST(int preorder[],int *preorderIdx,int key,int min,int max,int n){
    if(*preorderIdx >= n){
        return NULL;
    }
    Node* root = NULL;
    if(key < max && key > min){
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;
        if(*preorderIdx < n){
            root->left = BuildBST(preorder,preorderIdx,preorder[*preorderIdx],min,key,n);
            root->right = BuildBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);
    }   
        // if(*preorderIdx < n){
        //     root->right = BuildBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);
        // }
    }
    return root;
}

Node* bstFromPreOrder(int preorder[],int *idx,int min,int max,int n){
    if(*idx >= n)
        return NULL;
    if(preorder[*idx] < min || preorder[*idx] > max)
        return NULL;
    
    int key = preorder[*idx];
    Node *temp = new Node(key);
    *idx = *idx + 1;
    temp->left = bstFromPreOrder(preorder, idx, min, key, n);
    temp->right = bstFromPreOrder(preorder, idx, key, max, n);
    return temp;
}

void printPreorder(Node* root){
 if(root != NULL){
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
 }
}
int main(int argc, char const *argv[])
{
    int preorder[] = {10,2,1,13,11};
    int n = 5;
    int preorderIdx = 0;
    Node *rootNode = bstFromPreOrder(preorder, &preorderIdx, INT16_MIN, INT16_MAX, n);
    // Node *rootNode = BuildBST(preorder, &preorderIdx,preorder[preorderIdx], INT16_MIN, INT16_MAX, n);
    printPreorder(rootNode);
    return 0;
}
