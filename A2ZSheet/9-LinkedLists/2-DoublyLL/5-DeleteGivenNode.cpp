#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

void deleteGivenNode(Node* &node) 
{

    if (node == nullptr) 
    {
       
        return;
    }
        Node*previous=node->prev;
        Node*front=node->next;

    if (previous == nullptr) 
    {
        if (front != nullptr) 
        {
            front->prev = nullptr;
        }

        // Delete the node and return
        delete node;
        node = nullptr; 
        return;
    }

        if(front==nullptr)
        {
            previous->next=nullptr;
            delete node;
            return;
        }

        previous->next=front;
        front->prev=previous;

        delete node;

    }


// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a doubly linked list: 1 <-> 2 <-> 3 <-> 4
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    // Linking nodes
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;

    // Print original list
    cout << "Original list: ";
    printList(head);

    // Delete a specific node, e.g., third (node with value 3)
    deleteGivenNode(third);

    // Print updated list
    cout << "After deleting node with value 3: ";
    printList(head);

    return 0;
}