#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, weight;
    Edge(int u, int v, int weight) : u(u), v(v), weight(weight) {}
};

class DSU {
public:
    vector<int> parent;
    vector<int> rank;

    DSU(int n) {
        parent.resize(n);
        rank = vector<int>(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int v) {
        if (parent[v] != v)
            parent[v] = find(parent[v]); // Path compression
        return parent[v];
    }

    bool Union(int u, int v) {
        int root_u = find(u), root_v = find(v);
        if (root_u == root_v)
            return false;

        // Union by rank
        if (rank[root_u] < rank[root_v])
            parent[root_u] = root_v;
        else if (rank[root_u] > rank[root_v])
            parent[root_v] = root_u;
        else {
            parent[root_v] = root_u;
            rank[root_u]++;
        }
        return true;
    }
};

bool comparator(Edge e1, Edge e2) {
    return e1.weight < e2.weight; // Ascending for MST
}

void kruskal(int n, vector<Edge> edges) {
    sort(edges.begin(), edges.end(), comparator);
    DSU disjointSet(n);

    int mst_weight = 0;
    vector<Edge> mst_edges;

    for (auto &edge : edges) {
        if (disjointSet.Union(edge.u, edge.v)) {
            mst_weight += edge.weight;
            mst_edges.push_back(edge);
        }
    }

    cout << "Minimum Spanning Tree Weight: " << mst_weight << endl;
    cout << "Edges in the MST:\n";
    for (auto &e : mst_edges) {
        cout << e.u << " - " << e.v << " : " << e.weight << endl;
    }
}

int main() {
    int n = 6; // number of vertices (0 to 5)
    vector<Edge> edges = {
        {0, 1, 4},
        {0, 2, 4},
        {1, 2, 2},
        {1, 0, 4},
        {2, 0, 4},
        {2, 1, 2},
        {2, 3, 3},
        {2, 5, 2},
        {2, 4, 4},
        {3, 2, 3},
        {3, 4, 3},
        {4, 2, 4},
        {4, 3, 3},
        {5, 2, 2},
        {5, 4, 3}
    };

    kruskal(n, edges);
    return 0;
}
