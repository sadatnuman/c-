//Part A
#include <iostream>
#include <string>
using namespace std;

struct Customer {
    string name;
    double billAmount;
};

class CustomerQueue {
private:
    struct Node {
        Customer data;
        Node* next;
        Node(Customer customer) : data(customer), next(nullptr) {}
    };

    Node* front;
    Node* rear;

public:
    CustomerQueue() : front(nullptr), rear(nullptr) {}

    ~CustomerQueue() {
        while (!isCustomerQueueEmpty()) {
            dequeueCustomer();
        }
    }

    void enqueueCustomer(Customer customer) {
        Node* newNode = new Node(customer);
        if (isCustomerQueueEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeueCustomer() {
        if (isCustomerQueueEmpty()) {
            cout << "Queue is empty. No customer to dequeue." << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
    }

    Customer peekCustomer() {
        if (isCustomerQueueEmpty()) {
            cout << "Queue is empty. No customer to peek." << endl;
            return {" ", 0.0};
        }
        return front->data;
    }

    bool isCustomerQueueEmpty() {
        return front == nullptr;
    }
};

int main() {
    CustomerQueue queue;
    queue.enqueueCustomer({"MD. Nazmus", 45.67});
    queue.enqueueCustomer({"Sadat", 23.45});
    queue.enqueueCustomer({"Numan", 12.34});

    if (!queue.isCustomerQueueEmpty()) {
        Customer firstCustomer = queue.peekCustomer();
        cout << "First customer: " << firstCustomer.name << " (Bill Amount: "<< firstCustomer.billAmount << ")" << endl;
        
        queue.dequeueCustomer();
    }

    if (!queue.isCustomerQueueEmpty()) {
        Customer firstCustomer = queue.peekCustomer();
        cout << "After dequeue, first customer: " << firstCustomer.name << " (Bill Amount: " << firstCustomer.billAmount << ")" << endl;
    } else {
        cout << "Queue is empty after dequeue." << endl;
    }
    return 0;
}

