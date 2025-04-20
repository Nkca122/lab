#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    vector<vector<pair<int, int>>> adj_list;
    int num_nodes;
    Graph(int n)
    {
        num_nodes = n;
        adj_list.resize(n);
    }

    void add_edge(int u, int v, int w)
    {
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
};

vector<int> djikstra(Graph G, int start=0)
{
    vector<int> distances(G.num_nodes, INT_MAX);
    distances[start] = 0;
    set<int> visited;

    while(visited.size() < G.num_nodes){
        int current_vertex = -1;
        for(int i = 0; i < G.num_nodes; i++){
            if(visited.find(i) == visited.end() && (current_vertex == -1 || distances[i] < distances[current_vertex])){
                current_vertex = i;
            }
        }

        if(current_vertex == -1) break;
        visited.insert(current_vertex);

        for(auto& p: G.adj_list[current_vertex]){
            if(visited.find(p.first) == visited.end()){
                int new_distance = distances[current_vertex] + p.second;
                if(new_distance < distances[p.first]){
                    distances[p.first] = new_distance;
                }
            }
        }
    }

    return distances;
}

int main() {
    Graph g(4);
    g.add_edge(0, 1, 1);
    g.add_edge(0, 2, 4);
    g.add_edge(1, 2, 2);
    g.add_edge(1, 3, 5);
    g.add_edge(2, 3, 1);

    vector<int> shortest = djikstra(g, 0);

    cout << "Shortest distances from node 0:" << endl;
    for (int i = 0; i < shortest.size(); i++) {
        cout << "To node " << i << ": " << shortest[i] << endl;
    }

    return 0;
}

