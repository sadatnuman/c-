#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Graph {
private:
    Node** adjList;
    int size;

public:
    // Constructor to initialize the graph
    Graph(int size) {
        this->size = size;
        adjList = new Node*[size];
        for (int i = 0; i < size; i++) {
            adjList[i] = nullptr;
        }
    }

    // Add a vertex to the graph
    void addVertex(int vertex) {
        if (vertex >= 0 && vertex < size && !adjList[vertex]) {
            adjList[vertex] = new Node(vertex);
        }
    }

    // Add an edge between two vertices of the graph
    void addEdge(int src, int dest) {
        if (src >= 0 && src < size && dest >= 0 && dest < size) {
            // Add destination to the adjacency list of source
            Node* newNode = new Node(dest);
            newNode->next = adjList[src];
            adjList[src] = newNode;

            // Remove this block if it's an undirected graph
            // Add source to the adjacency list of destination
            newNode = new Node(src);
            newNode->next = adjList[dest];
            adjList[dest] = newNode;
        }
    }

    // Display the vertices of the graph
    void displayVertices() {
        cout << "Graph Vertices: ";
        for (int i = 0; i < size; i++) {
            if (adjList[i]) {
                cout << adjList[i]->data << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    int size = 5; // The number of vertices in the graph
    Graph graph(size);

    // Adding vertices
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);
    graph.addVertex(4);
    graph.addVertex(5);

    // Adding edges
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(4, 5);

    // Displaying vertices
    graph.displayVertices();

    return 0;
}

