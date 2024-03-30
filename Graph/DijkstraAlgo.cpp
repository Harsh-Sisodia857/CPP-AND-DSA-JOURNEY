#include <bits/stdc++.h>
using namespace std;

void addEdge(map<int, vector<pair<int, int>>> &adj, int node, pair<int, int> neighbour)
{
    adj[node].push_back(neighbour);
}

int main()
{
    int n = 5, m = 6, src = 1;
    map<int, vector<pair<int, int>>> adj;

    addEdge(adj, 1, {2, 2});
    addEdge(adj, 1, {4, 1});
    addEdge(adj, 2, {1, 2});
    addEdge(adj, 2, {5, 5});
    addEdge(adj, 2, {3, 4});
    addEdge(adj, 3, {2, 4});
    addEdge(adj, 3, {4, 3});
    addEdge(adj, 3, {5, 1});
    addEdge(adj, 4, {1, 1});
    addEdge(adj, 4, {3, 3});
    addEdge(adj, 5, {2, 5});
    addEdge(adj, 5, {3, 1});

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n + 1, INT_MAX);
    pq.push({0, src});
    dist[src] = 0;
    while (!pq.empty())
    {
        int distance = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for (auto it : adj[node])
        {
            int nextNode = it.first;
            int nextDist = it.second;
            if (dist[nextNode] > (distance + nextDist))
            {
                dist[nextNode] = distance + nextDist;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }

    cout << "The Distance From Source Node : ";
    for (int i = 1; i <= n; i++)
        cout << dist[i] << " ";
    return 0;
}