#include <iostream>
using namespace std;

const int MAX_VERTICES = 20;

struct Node {
    int val;
    Node* next;
};

Node* adjList[MAX_VERTICES];
int edgeCount = 0;

void addEdge(int u, int v) {
    Node* newNode1 = new Node;
    newNode1->val = v;
    newNode1->next = adjList[u];
    adjList[u] = newNode1;

    Node* newNode2 = new Node;
    newNode2->val = u;
    newNode2->next = adjList[v];
    adjList[v] = newNode2;

    edgeCount = edgeCount + 1;
}

void displayAdjList(int numVertices) {
    for (int i = 0; i < numVertices; i++) {
        cout << i << ": ";
        Node* curr = adjList[i];
        while (curr != NULL) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }
    cout<<"Number of Edge: "<<edgeCount<<endl;
}

int main() {
    int numVertices = 6;
    for (int i = 0; i < numVertices; i++) {
        adjList[i] = NULL;
    }
    addEdge(1, 2);
    addEdge(1, 4);
    addEdge(1, 5);
    addEdge(2, 3);
    addEdge(2, 5);
    addEdge(3, 0);
    addEdge(3, 5);
    addEdge(0, 4);
    addEdge(4, 5);
    displayAdjList(numVertices);
    return 0;
}
