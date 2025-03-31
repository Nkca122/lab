#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Node
{
public:
    TreeNode *val;
    Node *next;
    Node(TreeNode *x)
    {
        val = x;
        next = nullptr;
    }
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = nullptr;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    void enqueue(TreeNode *x)
    {
        Node *newNode = new Node(x);
        if (rear == nullptr)
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    TreeNode *dequeue()
    {
        if (isEmpty())
            return nullptr;
        Node *temp = front;
        TreeNode *data = temp->val;
        front = front->next;
        if (front == nullptr)
            rear = nullptr;
        delete temp;
        return data;
    }
};

void bfs(TreeNode *root)
{
    if (root == nullptr)
        return;

    Queue q;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        TreeNode *node = q.dequeue();
        cout << node->val << " ";

        if (node->left)
            q.enqueue(node->left);
        if (node->right)
            q.enqueue(node->right);
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "BFS Traversal: ";
    bfs(root);
    cout << endl;

    return 0;
}
