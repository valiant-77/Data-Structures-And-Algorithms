#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100];  // Array to store stack elements
    int top;       // Index of the top element
    int capacity;  // Maximum size of the stack

public:
    // Constructor
    Stack(int size) {
        capacity = size;
        top = -1;
    }

    // Check if the stack is empty
    bool isEmpty() {
        if(top==-1) return true;
          else return false;
    }

    // Check if the stack is full
    bool isFull() {
        if(top==capacity-1) return true;
        else return false;
    }

    // Push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push: " << value << endl;
        } else {
            arr[++top] = value;
        }
    }

    // Pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return -1;
        } else {
            return arr[top--];
        }
    }

    // Peek the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot peek." << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    // Display the stack contents
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack(5); // Create a stack of size 5

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();

    cout << "Top element: " << stack.peek() << endl;

    
    
    
    stack.display();

    return 0;
}
