#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class MyNode {
public:
    Node* first;
    Node* current;

    MyNode() {
        first = nullptr;
        current = nullptr;
    }

    void insertFirst(int element) {
        Node* newNode = new Node;
        newNode->data = element;
        newNode->prev = nullptr;
        newNode->next = first;

        if (first != nullptr) {
            first->prev = newNode;
        }

        first = newNode;
        current = newNode;
    }

    void insertLast(int element) {
        if (first == nullptr) {
            insertFirst(element);
            return;
        }

        Node* newNode = new Node;
        newNode->data = element;
        newNode->next = nullptr;

        current = first;
        while (current->next != nullptr) {
            current = current->next;
        }

        newNode->prev = current;
        current->next = newNode;
        current = newNode;
    }

    void insertAfter(int element) {
        if (first == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        
        current = first;
        while (current != nullptr) {
            if (current->data == element) {
                break;
            }
            current = current->next;
        }
        
        if (current == nullptr) {
            cout << "Element not found." << endl;
            return;
        }
        else{
            int num;
            cout << "Enter num : ";
            cin >> num;
            Node* newNode = new Node;
            newNode->data = num;
            newNode->prev = current;
            newNode->next = current->next;
            
            if (current->next != nullptr) {
                current->next->prev = newNode;
            }
            current->next = newNode;
            current = newNode;
        }
    }

    void deleteFirst() {
        if (first == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        current = first;
        first = first->next;

        if (first != nullptr) {
            first->prev = nullptr;
        }

        delete current;
    }

    void deleteLast() {
        if (first == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        current = first;
        while (current->next != nullptr) {
            current = current->next;
        }

        if (current->prev != nullptr) {
            current->prev->next = nullptr;
        } else {
            first = nullptr;
        }

        delete current;
    }

    void deleteWithValue(int element) {
        if (first == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        current = first;
        while (current != nullptr) {
            if (current->data == element) {
                break;
            }
            current = current->next;
        }

        if (current == nullptr) {
            cout << element << " is not found in the linked list." << endl;
            return;
        }

        if (current->prev != nullptr) {
            current->prev->next = current->next;
        } else {
            first = current->next;
        }

        if (current->next != nullptr) {
            current->next->prev = current->prev;
        }

        delete current;
    }

    void show() {
        current = first;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    MyNode obj;
    int choice, element;

    while (true) {
        cout << "1. Insert Node at first position : " << endl;
        cout << "2. Insert Node at last position : " << endl;
        cout << "3. Insert Node after : " << endl;
        cout << "4. Delete first Node : " << endl;
        cout << "5. Delete last Node : " << endl;
        cout << "6. Delete Node with value : " << endl;
        cout << "7. Show number nodes : " << endl;
        cout << "8. Exit : " << endl;

        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter element : ";
                cin >> element;
                obj.insertFirst(element);
                break;
            }
            case 2: {
                cout << "Enter element : ";
                cin >> element;
                obj.insertLast(element);
                break;
            }
            case 3: {
                cout << "Enter the element after which you want to insert : ";
                cin >> element;
                obj.insertAfter(element);
                break;
            }
            case 4: {
                obj.deleteFirst();
                break;
            }
            case 5: {
                obj.deleteLast();
                break;
            }
            case 6: {
                cout << "Enter the element which you want to delete : ";
                cin >> element;
                obj.deleteWithValue(element);
                break;
            }
            case 7: {
                obj.show();
                break;
            }
            case 8: {
                cout << "Exited from the program." << endl;
                exit(0);
                break;
            }
            default: {
                cout << "Invalid choice. Please enter a valid choice." << endl;
            }
        }
    }

    return 0;
}

