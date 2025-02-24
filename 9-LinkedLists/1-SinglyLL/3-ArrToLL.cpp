#include <bits/stdc++.h>
using namespace std;

// Define a Node structure
class Node {
    public:
    int data;
    Node* next;
    
    public:
    Node(int d){
        data=d;
        next=nullptr;
        
    }
};
    


// Function to convert an array to a linked list
Node* arrayToLinkedList(int arr[], int size) {
    if (size == 0) return nullptr;

    // Create head of the linked list
    Node* head = new Node(arr[0]);
    Node* current = head;

   /* Iterate through the array 
   and create linked list nodes*/
    for (int i = 1; i < size; i++) {
        Node *temp= new Node(arr[i]);
        current->next=temp;
        current=current->next;
    }

    return head;
}

// Function to print the linked list


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    Node* head = arrayToLinkedList(arr, size);

    // Print the linked list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
       temp = temp->next;
    }
    cout << "nullptr" << endl;


    return 0;
}