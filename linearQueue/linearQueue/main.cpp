#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
int Data[MAX_SIZE];
int front = -1;
int rear = -1;

bool is_blank() {
    return ((front == -1) && (rear == -1));
}

bool is_full() {
    return (rear == (MAX_SIZE - 1));
}

bool enqueue(int x) {
    if (is_full()) {
        cout << "Queue is full." << endl;
        return false;
    }
    if (is_blank()) {
        front = 0;
        rear = 0;
        Data[rear] = x;
        return true;
    }
    else {
        rear++;
        Data[rear] = x;
        return true;
    }
}

bool dequeue() {
    if (is_blank()) {
        cout << "Queue is empty." << endl;
        return false;
    }
    if (front == rear) {
        front = rear = -1;
        return true;
    }
    else {
        front++;
        return true;
    }
}

int get_front() {
    if (is_blank()) {
        cout << "Queue is empty." << endl;
        return -1;
    }
    return Data[front];
}

int get_rear() {
    if (is_blank()) {
        cout << "Queue is empty." << endl;
        return -1;
    }
    return Data[rear];
}

void display() {
    if (is_blank()) {
        cout << "Queue is empty." << endl;
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << Data[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    dequeue();
    display();
    cout << "Front element: " << get_front() << endl;
    cout << "Rear element: " << get_rear() << endl;
    return 0;
}
