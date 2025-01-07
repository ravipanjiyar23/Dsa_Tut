#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, vector<int> adj[], vector<bool> &visited, vector<bool> &recStack) {
    visited[node] = true;
    recStack[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor] && dfs(neighbor, adj, visited, recStack))
            return true;
        else if (recStack[neighbor])
            return true;
    }
    recStack[node] = false;
    return false;
}

bool isCyclic(int V, vector<int> adj[]) {
    vector<bool> visited(V, false), recStack(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(i, adj, visited, recStack))
                return true;
        }
    }
    return false;
}

int main() {
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    if (isCyclic(V, adj))
        cout << "Cycle detected in Directed Graph" << endl;
    else
        cout << "No cycle in Directed Graph" << endl;

    return 0;
}
