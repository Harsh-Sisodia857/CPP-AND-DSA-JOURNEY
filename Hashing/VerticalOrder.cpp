#include<iostream>
#include <map>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
};

Node* newNode(int key){
    Node* temp = new Node;
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void getVerticalOrder(Node *root,int hdis,map<int,vector<int>> &m){
    if(root==NULL){
        return;
    }
    m[hdis].push_back(root->data);
    getVerticalOrder(root->left,hdis-1,m);
    getVerticalOrder(root->right,hdis+1,m);

}
int main(int argc, char const *argv[])
{
    Node *root = newNode(10);
    root->left = newNode(7);
    root->right = newNode(4);
    root->left->left = newNode(3);
    root->left->right = newNode(11);
    root->right->left = newNode(14);
    root->right->right = newNode(6);
    int hdis = 0;
    map<int,vector<int>> m;
    map<int,vector<int>>::iterator it;

    getVerticalOrder(root,hdis,m);

     for(it = m.begin(); it != m.end(); it++){
        for(int i=0 ; i < (it->second).size(); i++)
            cout<<(it->second)[i]<<" ";
        cout<<endl;
    }
    return 0;
}
