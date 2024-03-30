#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> v;

Node* insertBST(Node* &root,int info){
    if(root == NULL){
        return new Node(info);
    }
    if(root->data < info){
        root->right = insertBST(root->right,info);
    }
    else{
        root->left = insertBST(root->left,info);
    }
    return root;
}

Node* searchInBST(Node* root,int key){
    if(root == NULL)
        return NULL;
    if(root->data == key)
        return root;
    if(root->data > key)
        return searchInBST(root->left,key);
    return searchInBST(root->right,key);

}

void inorder(Node* &root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* minValueNode(Node* root){
    Node* current = root;
    while(current->left != NULL){
        current = current->left;
    }
    return current;
}

Node* deleteBST(Node* &root,int key){
    if(root == NULL){
        return root;
    }
    if(root->data > key){
        root->left = deleteBST(root->left,key);
    }
    else if(root->data < key){
        root->right = deleteBST(root->right,key);
    }
    else{
        if(root->left == NULL && root->right == NULL)
            return NULL;
        else if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            free(root);
            return temp;
        }
        else{
            Node *temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteBST(root->right,temp->data);
        }
    }
    return root;
}

int main(int argc, char const *argv[])
{
    int arr[] = {5,1,3,4,2,7};
    Node *root = NULL;
    root = insertBST(root,5);
    insertBST(root,17);
    insertBST(root,14);
    insertBST(root,18);
    insertBST(root,-2);
    insertBST(root,15);
    inorder(root);
    cout<<endl;
    // if(searchInBST(root,4) == NULL)
    //     cout<<endl<<"Key does not exist";
    // else
    //     cout<<endl<<"Key exists";
    deleteBST(root,18);
    inorder(root);
    return 0;
}


