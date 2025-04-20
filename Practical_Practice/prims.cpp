#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, weight;
    Edge(int u, int v, int weight) : u(u), v(v), weight(weight) {}
};

class Graph {
public:
    int num_nodes;
    vector<vector<int>> adj_matrix;
};

void prims(Graph G, int start = 0) {
    G.num_nodes = G.adj_matrix.size();  // FIX: Set num_nodes
    vector<bool> selected(G.num_nodes, false);
    selected[start] = true;

    vector<Edge> edges;

    for (int i = 0; i < G.num_nodes - 1; i++) {
        Edge min_edge(-1, -1, INT_MAX);
        for (int j = 0; j < G.num_nodes; j++) {
            if (selected[j]) {
                for (int k = 0; k < G.num_nodes; k++) {
                    int weight = G.adj_matrix[j][k];
                    if (!selected[k] && weight && weight < min_edge.weight) {
                        min_edge = Edge(j, k, weight);
                    }
                }
            }
        }

        if (min_edge.v == -1) {
            cout << "Graph is not connected!\n";
            return;
        }

        selected[min_edge.v] = true;
        edges.push_back(min_edge);
    }

    for (auto& edge : edges) {
        cout << edge.u << " - " << edge.v << " : " << edge.weight << endl;
    }
}

int main() {
    Graph G;
    G.adj_matrix = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    prims(G);
    return 0;
}
