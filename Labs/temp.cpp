#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
    Node(){
        data = 0; next = nullptr;
    }
    Node(int x){
        data = x; next = nullptr;
    }
    Node(int x, Node* nxt){
        data = x; next = nxt;
    }
} Node;

int32_t main()
{
    Node* head = (Node*)malloc(sizeof(Node));
    int t; cin >> t;
    while(t--){
        
    }


    return 0;
}