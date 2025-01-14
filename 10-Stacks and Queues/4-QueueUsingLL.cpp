#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Queue class using linked list
class Queue {
private:
    Node* front;
    Node* rear;

public:
    // Constructor to initialize the queue
    Queue() : front(nullptr), rear(nullptr) {}

    // Enqueue operation
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) { // If the queue is empty
            front=newNode;
            rear=newNode;
            return;
        }
        else{
        rear->next = newNode;
        rear = newNode;
        }
    }

    // Dequeue operation
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow\n";
            return;
        }
        else{
        Node* temp = front;
        front = front->next;

        if (front == nullptr) // If the queue becomes empty
            rear = nullptr;

        delete temp;
        }
    }

    // Peek operation
    int peek() const {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        else{
        return front->data;
        }
    }

    // Check if the queue is empty
    bool isEmpty() const {
        return front == nullptr;
    }

    // Display queue contents
    void display() const {
        Node* current = front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Main function to demonstrate queue operations
int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Queue contents: ";
    queue.display();

    cout << "Front element: " << queue.peek() << endl;

    queue.dequeue();
    cout << "Queue contents after dequeue: ";
    queue.display();

    return 0;
}
