#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, count, capacity;
    int arr[100]; // Assume a fixed maximum size for simplicity

public:
    // Constructor to initialize the queue
    Queue(int cap) {
        capacity = cap;
        count = 0;
        front = 0;
        rear = -1;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return count== 0;
    }

    // Function to check if the queue is full
    bool isFull() {
        return count == capacity;
    }

    // Function to enqueue an element
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << value << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        count++;
        cout << value << " enqueued to the queue." << endl;
    }

    // Function to dequeue an element
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1; // Return -1 to indicate an error
        }
        int value = arr[front];
        front = (front + 1) % capacity;
        count--;
        return value;
    }

    // Function to get the front element
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element." << endl;
            return -1; // Return -1 to indicate an error
        }
        return arr[front];
    }

    // Function to get the rear element
    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty. No rear element." << endl;
            return -1; // Return -1 to indicate an error
        }
        return arr[rear];
    }
};

int main() {
    Queue q(5); // Create a queue with capacity 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    

    q.enqueue(60);

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    return 0;
}
