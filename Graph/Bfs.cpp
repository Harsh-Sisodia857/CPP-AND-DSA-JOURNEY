#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// -- Inputs --
// -> V - represents number of vertices in the Graph
// -> adj[] - represents adjacency list for the Graph
// -- Output --
// -> bfs_traversal - a vector containing bfs traversal
// for entire graph

vector<int> bfsOfGraph(int V,vector<int> adj[],int s)
{
    queue<int> q;
    vector<int> bfs_traversal;
    // Store Information about visited node
    vector<bool> vis(V,false);
    for(int i = 0; i < V; i++){
        // inserting the starting vertex into the queue
        vis[s] = true;
        q.push(s);
        //To check if node is already visited
        if(!vis[i]){
            vis[i] = true;
            q.push(i);
            while(!q.empty()){
                int Gnode = q.front();
                q.pop();
                bfs_traversal.push_back(Gnode);
               // Insert all the unvisited neighbours of the vertex into the queue
                for(auto it : adj[Gnode]){
                    if(!vis[it]){
                        vis[it] = true;
                        q.push(it);
                    }
                }
            }
        }
    }
    return bfs_traversal;
}

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(int argc, char const *argv[])
{
    int v = 4;
    vector<int> adj[v];
    addEdge(adj,0, 1);
    addEdge(adj,0, 2);
    addEdge(adj,1, 2);
    addEdge(adj,2, 0);
    addEdge(adj,2, 3);
    addEdge(adj,3, 3);
    int start; cin>>start;
    vector<int> traversal = bfsOfGraph(v,adj,start);
    vector<int>:: iterator it;
    for(it = traversal.begin(); it != traversal.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}
