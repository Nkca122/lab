#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    vector<vector<int>> adj_list;
    int num_nodes;
    Graph(int n)
    {
        num_nodes = n;
        adj_list.resize(n);
    }

    void add_edge(int u, int v)
    {
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
};

vector<int> DFS(Graph G, int start = 0)
{
    vector<int> DFS_res;
    vector<bool> visited(G.num_nodes, false);
    stack<int> S;
    
    S.push(start);

    while (!S.empty())
    {
        int current_node = S.top();
        S.pop();

        if (visited[current_node])
            continue;

        visited[current_node] = true;
        DFS_res.push_back(current_node);

        for (auto &vertex : G.adj_list[current_node])
        {
            if (!visited[vertex])
            {
                S.push(vertex);
            }
        }
    }

    return DFS_res;
}

int main()
{
    Graph G(5);
    G.adj_list = {{1, 2}, {0, 2}, {0, 1, 3, 4}, {2}, {2}};

    vector<int> res = DFS(G);
    for (auto &v : res)
    {
        cout << v << endl;
    }
}