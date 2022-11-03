#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

bool checkCycle(int node,vector<int> adj[],int vis[],int dfsVis[]){
    vis[node] = 1;
    dfsVis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            if(checkCycle(it,adj,vis,dfsVis))
                return true;
        }
        else if(dfsVis[it])
            return true;
    }
    dfsVis[node] = 0;
    return false;
}

bool isCycle(int V,vector<int> adj[]){
    int vis[V];
    int dfsVis[V];
    memset(vis, 0, sizeof(vis));
    memset(dfsVis, 0, sizeof(dfsVis));
    for (int i = 0; i < V; i++){
        if(!vis[i]){
            if(checkCycle(i,adj,vis,dfsVis))
                return true;
        }
    }
    return false;
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

int main(int argc, char const *argv[])
{
    vector<int> adj[6];
    for (int i = 0; i < 5; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    cout << isCycle(6, adj);
    return 0;
}
