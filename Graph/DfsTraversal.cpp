#include <iostream>
#include <vector>
using namespace std;

void dfs(int node,vector<int> &vis,vector<int> adj[],vector<int> &storeDfs){
    storeDfs.push_back(node);
    vis[node] = 1;
    for(auto &it : adj[node]){
        if(!vis[it]){
            dfs(it, vis, adj, storeDfs);
        }
    }
}

vector<int> dfsOfGraph(int V,vector<int> adj[])
{   
    vector<int> vis(V, 0); // for 1 based dfs traversal use vis(v+1,0)
    vector<int> storeDfs;
    for (int i = 0; i < V; i++){
        if(!vis[i]){
            dfs(i, vis, adj, storeDfs);
        }
    }
    return storeDfs;
}
void addEdge(vector<int> adj[], int u, int v)
{ 
    // when graph is undirected
    adj[u].push_back(v);
    adj[v].push_back(u);
    return;
}

int main(int argc, char const *argv[])
{
    vector<int> adj[6];
    for (int i = 0; i < 6; i++){
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    vector<int> dfsTraversal = dfsOfGraph(6, adj);
    for(auto &it : dfsTraversal){
        cout << it << "    ";
    } 
    return 0;
}
