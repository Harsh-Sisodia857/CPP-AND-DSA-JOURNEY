#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool checkBipariteBFS(int src,vector<int> adj[],int color[]){
    queue<int> q;
    q.push(src);
    color[src] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it : adj[node]){
            if(color[it] == -1){
                color[it] = 1 - color[node];
                q.push(it);
            }
            else if(color[it] == color[node])
                return false;
        }
    }
    return true;
}

bool checkBipariteDFS(int node,vector<int> adj[],int color[]){
    if(color[node] == -1){
        color[node] = 1;
    }
    for(auto it : adj[node]){
        if(color[it] == -1){
            color[it] = 1 - color[node];
            if(!checkBipariteDFS(it,adj,color))
                return false;
        }
        else if(color[it] == color[node]){
            return false;
        }
    }
    return true;
}

bool IsBiparite(int V,vector<int> adj[]){
    int color[V];
    memset(color, -1, sizeof(color));
    for (int i = 0; i < V; i++){
        if(color[i] == -1){
            // if(checkBipariteBFS(i,adj,color))
            //     return true;
            if(checkBipariteDFS(i,adj,color))
                return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    vector<int> adj[6];
    for (int i = 0; i < 5; i++){
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    cout << IsBiparite(6, adj);
    return 0;
}
