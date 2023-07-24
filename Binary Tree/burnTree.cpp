
#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
    int val;
    struct node *left;
    struct node *right;
    node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

node *createMapping(node *root, map<node *, node *> &nodeToParent, int start){
        node *res = NULL;
        queue<node *> q;
        q.push(root);
        nodeToParent[root] = NULL;
        while (!q.empty())
        {
            node *frontnode = q.front();
            q.pop();
            if (frontnode->val == start)
            {
                res = frontnode;
            }
            if (frontnode->left)
            {
                nodeToParent[frontnode->left] = frontnode;
                q.push(frontnode->left);
            }
            if (frontnode->right)
            {
                nodeToParent[frontnode->right] = frontnode;
                q.push(frontnode->right);
            }
        }
        return res;
    }

    int burnTree(node *root, int start, map<node *, node *> nodeToParent)
    {
        map<node *, bool> visited;
        queue<node *> q;
        q.push(root);
        visited[root] = true;
        int time = 0;
        while (!q.empty())
        {
            bool flag = false;
            int s = q.size();
            // cout << q.size() << " ";
            for (int i = 0; i < s; i++)
            {
                node *frontnode = q.front();
                q.pop();

                if (frontnode->left && !visited[frontnode->left])
                {
                    q.push(frontnode->left);
                    visited[frontnode] = true;
                    flag = true;
                }
                if (frontnode->right && !visited[frontnode->right])
                {
                    q.push(frontnode->right);
                    visited[frontnode] = true;
                    flag = true;
                }
                if (nodeToParent[frontnode] && !visited[nodeToParent[frontnode]])
                {
                    q.push(nodeToParent[frontnode]);
                    visited[nodeToParent[frontnode]] = true;
                    flag = true;
                }
            }
            if (flag)
            {              
                time++;
                flag = false;
            }
        }
        return time;
    }

    int amountOfTime(node *root, int start)
    {
        map<node *, node *> nodeToParent;
        node *target;
        // create mapping and find start node
        target = createMapping(root, nodeToParent, start);
        
        // burn the tree
        int ans = burnTree(target, start, nodeToParent);
        return ans;
    }

int main(){
        node *root = new node(1);
        root->left = new node(2);
        root->right = new node(3);
        /*
           1
          /  \
         2    3
        */

        root->left->left = new node(4);
        root->left->right = new node(5);
        /*
            1
           /  \
          2    3
         / \
        4   5
        */

        root->right->left = new node(6);
        root->right->right = new node(7);
        cout << amountOfTime(root, 3);
        return 0;
    }
