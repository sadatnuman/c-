#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = nullptr;
    }

    void insert(int value) {
        Node* current = root;
        Node* new_node = new Node(value);
        if (root == nullptr) {
            root = new_node;
            current = new_node;
        }
        current = root;
        while (current != NULL) {
            if (value < current->data) {
                if (current->left == nullptr) {
                    current->left = new_node;
                }
                else {
                    current = current->left;
                }
            }
            else if (value > current->data) {
                if (current->right == nullptr) {
                    current->right = new_node;
                }
                else {
                    current = current->right;
                }
            }
            else {
                cout << "Invalid Entry" << endl;
            }
        }
    }
};

int main() {
    BST bst;
    
    int values_to_insert[] = {5, 3, 8, 2, 4, 7, 9};
    int n = sizeof(values_to_insert) / sizeof(values_to_insert[0]);
    
    for (int i = 0; i < n; ++i) {
        bst.insert(values_to_insert[i]);
    }

    // Now the BST is ready

    return 0;
}

