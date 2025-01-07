#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, weight;
    bool operator<(Edge const &other) const {
        return weight < other.weight;
    }
};

int findParent(int v, vector<int> &parent) {
    if (v == parent[v]) return v;
    return parent[v] = findParent(parent[v], parent);
}

void unionSets(int a, int b, vector<int> &parent, vector<int> &rank) {
    a = findParent(a, parent);
    b = findParent(b, parent);
    if (a != b) {
        if (rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
}

void kruskalMST(int V, vector<Edge> &edges) {
    vector<int> parent(V), rank(V, 0);
    for (int i = 0; i < V; i++) parent[i] = i;

    sort(edges.begin(), edges.end());

    vector<Edge> result;
    for (Edge e : edges) {
        if (findParent(e.u, parent) != findParent(e.v, parent)) {
            result.push_back(e);
            unionSets(e.u, e.v, parent, rank);
        }
    }

    cout << "Edge   Weight" << endl;
    for (Edge e : result)
        cout << e.u << " - " << e.v << "   " << e.weight << endl;
}

int main() {
    int V, E;
    cin >> V >> E;
    vector<Edge> edges(E);
    for (int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    kruskalMST(V, edges);
    return 0;
}
