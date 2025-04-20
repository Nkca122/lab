#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
        vector<vector<int>> adj_list;
        int num_nodes;
    Graph(int n){
        num_nodes = n;
        adj_list.resize(n);
    }

    void add_edge(int u, int v){
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
};

vector<int> BFS(Graph G, int start = 0){
    queue<int> Q;
    vector<bool> visited(G.num_nodes, false);
    vector<int> BFS_result;

    visited[start] = true;
    Q.push(start);

    while(!Q.empty()){
        int current_node = Q.front();
        BFS_result.push_back(current_node);
        Q.pop();
        for(auto& vertex : G.adj_list[current_node]){
            if(!visited[vertex]){
                visited[vertex] = true;
                Q.push(vertex);
            }
               
        }

    }

    return BFS_result;
}

int main(){
    Graph G(5);
    G.adj_list = {{1,2}, {0,2,3}, {0,1,4}, {1,4}, {2,3}};

    // for(auto& list : G.adj_list){
    //     for(auto& vertex: list){
    //         cout << vertex << " ";
    //     }
    //     cout << endl;
    // }

    vector<int> res = BFS(G);
    for(auto& v: res){
        cout << v << endl;
    }

}
