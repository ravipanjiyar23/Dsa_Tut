#include <iostream>
#include <vector>
using namespace std;

void dfsRecursive(int node, vector<int> adj[], vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfsRecursive(neighbor, adj, visited);
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    int start;
    cin >> start;
    vector<bool> visited(V, false);

    cout << "DFS starting from node " << start << ": ";
    dfsRecursive(start, adj, visited);
    cout << endl;

    return 0;
}
