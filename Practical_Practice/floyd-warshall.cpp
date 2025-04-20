#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9; // A large number to represent infinity

class Graph {
public:
    int num_nodes;
    vector<vector<int>> adj_matrix;

    Graph(int n) {
        num_nodes = n;
        adj_matrix = vector<vector<int>>(n, vector<int>(n, INF));

        // Distance from a node to itself is always 0
        for (int i = 0; i < n; i++) {
            adj_matrix[i][i] = 0;
        }
    }

    void add_edge(int u, int v, int weight) {
        adj_matrix[u][v] = weight;
    }
};

vector<vector<int>> floyd_warshall(Graph G) {
    vector<vector<int>> distances = G.adj_matrix;

    for (int k = 0; k < G.num_nodes; k++) {
        for (int i = 0; i < G.num_nodes; i++) {
            for (int j = 0; j < G.num_nodes; j++) {
                if (distances[i][k] < INF && distances[k][j] < INF && 
                    distances[i][k] + distances[k][j] < distances[i][j]) {
                    distances[i][j] = distances[i][k] + distances[k][j];
                }
            }
        }
    }

    return distances;
}

void print_matrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            if (val == INF)
                cout << "INF ";
            else
                cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    Graph G(n);

    G.add_edge(0, 1, 3);
    G.add_edge(0, 3, 5);
    G.add_edge(1, 0, 2);
    G.add_edge(1, 3, 4);
    G.add_edge(2, 1, 1);
    G.add_edge(3, 2, 2);

    vector<vector<int>> shortest_paths = floyd_warshall(G);

    cout << "Shortest distances between every pair of vertices:" << endl;
    print_matrix(shortest_paths);

    return 0;
}
