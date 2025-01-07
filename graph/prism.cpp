#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

void primMST(int V, vector<pair<int, int>> adj[]) {
    vector<int> key(V, INT_MAX);
    vector<int> parent(V, -1);
    vector<bool> inMST(V, false);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    key[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        inMST[u] = true;

        for (auto it : adj[u]) {
            int v = it.first;
            int weight = it.second;

            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                pq.push({key[v], v});
                parent[v] = u;
            }
        }
    }

    cout << "Edge   Weight" << endl;
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << "   " << key[i] << endl;
}

int main() {
    int V, E;
    cin >> V >> E;
    vector<pair<int, int>> adj[V];
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    primMST(V, adj);
    return 0;
}
