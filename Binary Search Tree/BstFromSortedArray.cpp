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

Node* bstFromSortedArray(int arr[],int start,int end){
    if(start > end)
        return NULL;
    int mid = (start+end)/2;
    Node* root = new Node(arr[mid]);
    root->left = bstFromSortedArray(arr,start,mid-1);
    root->right = bstFromSortedArray(arr,mid+1,end);
    return root;
}

void preorder(Node *root){
    if(root != NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {10,20,30,40,50};
    Node* root = bstFromSortedArray(arr,0,4);
    preorder(root);
    return 0;
}
