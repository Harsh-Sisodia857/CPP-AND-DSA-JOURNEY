#include <iostream>
#include <vector>
using namespace std;

// int main(int argc, char const *argv[])
// {
//     // Adjacency Matrix
//     // n is the no. of vertices and m is the no. of edges
//     int n,m;
//     cin>>n>>m;
//     int adjMat[n+1][n+1]; // matrix of n X n
//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j <= n; j++)
//             adjMat[i][j] = 0;
//     }
//     cout<<endl;
//     for(int i = 0; i < m; i++){
//         int u,v; cin>>u>>v;
//         adjMat[u][v] = 1;
//         adjMat[v][u] = 1;
//     }
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++)
//             cout<<adjMat[i][j]<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[],int V){
    for(int i = 0; i < V; i++){
        cout<<i;
        for(auto val : adj[i]){
            cout<<"-->"<<val;
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
{
    int v = 5;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    printGraph(adj,5);
    return 0;
}

