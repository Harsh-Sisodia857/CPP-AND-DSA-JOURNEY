#include <iostream>
#include <vector>
const int N = 1e5 + 2;
using namespace std;

void dfs(int node,vector<int> adj[],vector<bool> vis){
    // preorder
    vis[node] = true;
    cout<<node<<" ";

    // inorder
    vector<int> :: iterator it;
    for(it = adj[node].begin(); it != adj[node].end(); it++){
        if(!vis[*it]){
            dfs(*it,adj,vis);
        }
    }
}
void printGraph(vector<int> adj,int V){
    for(int i = 0; i <= V; i++){
        cout<<i<<"->"<<adj[i];
        
        cout<<endl;
    }
    
}
int main(int argc, char const *argv[])
{
    int V,E; cin>>V>>E;
    vector<int> adj[V];
    vector<bool> vis;
    vector<bool> :: iterator it;
    for(it = vis.begin(); it != vis.end(); it++){
        vis[*it] = false;
    }
    int x,y;
    for(int i = 0; i < E; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    printGraph(adj,V);
    dfs(1,adj,vis);
    return 0;
}
