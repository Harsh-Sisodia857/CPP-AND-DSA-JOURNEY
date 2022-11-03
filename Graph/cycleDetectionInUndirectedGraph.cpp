#include <iostream>
#include <utility>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

// // using DFS

// bool checkForCycle(int node,int parent, vector<int> &vis ,vector<int> adj[])
// {
//     vis[node] = 1;
//     for(auto it : adj[node]){
//         if(vis[it] == 0){
//             if(checkForCycle(it,node,vis,adj))
//                 return true;
//         }
//         else if(it != parent)
//             return true;
//     }
//     return false;
// }

// bool isCycle(int V,vector<int> adj[]){
//     vector<int> vis(V, 0);
//     for (int i = 0; i < V; i++){
//         if(!vis[i]){
//             if(checkForCycle(i,-1,vis,adj))
//                 return true;
//         }
//     }
//     return false;
// }

// int main(int argc, char const *argv[])
// {
//     vector<int> adj[6];
//     for (int i = 0; i < 5; i++){
//         int u, v;
//         cin >> u >> v;
//         addEdge(adj, u, v);
//     }
//     cout << isCycle(6, adj);
//     return 0;
// }

// using BFS

bool detectCycle(int node,vector<int> adj[],vector<int> &vis){
    queue<pair<int,int>> q;
    vis[node] = 1;
    q.push({node, -1});

    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for(auto it : adj[node]){
            if(!vis[it])
             {
                 vis[it] = 1;
                 q.push({it, node});
             }
             else if(it != parent){
                 return true;
             }
        }
    }
    return false;
}

bool isCycle(int V,vector<int> adj[]){
    vector<int> vis(V, 0);
    for (int i = 0; i < V; i++){
        if(!vis[i]){
            if(detectCycle(i,adj,vis))
                return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    vector<int> adj[6];
    for (int i = 0; i < 6; i++){
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    cout << isCycle(6, adj);
    return 0;
}
