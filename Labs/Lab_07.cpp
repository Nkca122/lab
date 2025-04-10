#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Node {
public:
    int data;
    int weight;
    Node* next;

    Node(int x, int w) {
        data = x;
        weight = w;
        next = nullptr;
    }
};

class Graph {
public:
    int num_nodes;
    Node** list;

    Graph(int nn) {
        num_nodes = nn;
        list = new Node*[nn];
        for (int i = 0; i < nn; i++) {
            list[i] = nullptr;
        }
    }

    void addEdge(int v1, int v2, int weight) {
        Node* newNode1 = new Node(v2, weight);
        newNode1->next = list[v1];
        list[v1] = newNode1;

        Node* newNode2 = new Node(v1, weight);
        newNode2->next = list[v2];
        list[v2] = newNode2;
    }

    void display() {
        for (int i = 0; i < num_nodes; i++) {
            cout << i << ": ";
            Node* temp = list[i];
            while (temp != nullptr) {
                cout << "(" << temp->data << ", w=" << temp->weight << ") ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    ~Graph() {
        for (int i = 0; i < num_nodes; i++) {
            Node* current = list[i];
            while (current) {
                Node* next = current->next;
                delete current;
                current = next;
            }
        }
        delete[] list;
    }
};

void dijkstra(Graph& g, int source, int target) {
    int n = g.num_nodes;
    vector<int> dist(n, INT_MAX);
    vector<bool> visited(n, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (visited[u])
            continue;
        visited[u] = true;

        Node* temp = g.list[u];
        while (temp != nullptr) {
            int v = temp->data;
            int w = temp->weight;

            if (!visited[v] && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }

            temp = temp->next;
        }
    }

    cout << "Shortest distance from " << source << " to " << target << " is: ";
    if (dist[target] == INT_MAX) {
        cout << "unreachable" << endl;
    } else {
        cout << dist[target] << endl;
    }
}

int main() {
    Graph g(5);
    g.addEdge(0, 1, 2);
    g.addEdge(0, 4, 1);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 2);
    g.addEdge(1, 4, 2);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 4, 3);

    g.display();

    dijkstra(g, 0, 3);

    return 0;
}
