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

void preorder(struct Node* root){
    if(root == NULL)
        return;
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}

void postorder(struct Node* root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
}

int main(int argc, char const *argv[])
{
    struct Node* root = new Node(1);
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
    cout<<"Preorder : "<<endl;   
    preorder(root);
    cout<<"\nPostorder : "<<endl;   
    postorder(root);
    cout<<"\nInorder : "<<endl;   
    inorder(root);
    return 0;
}
