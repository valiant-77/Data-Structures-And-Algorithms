#include <bits/stdc++.h>
using namespace std;

// Define a Node structure
class Node {
    public:
    int data;
    Node* next;

    
    // Constructor to initialize a new node
    public:
    Node(int d,Node* n,Node* p)
    {
        data=d;
        next=n;
      
    }
    
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

Node* order(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head; // If the list is empty or has only one node, no rearrangement is needed.
    }

    Node* odd = head;              // Pointer to track odd-indexed nodes
    Node* even = head->next;       // Pointer to track even-indexed nodes
    Node* evenHead = even;         // To store the starting point of even-indexed nodes

    while (even != nullptr && even->next != nullptr) {
        odd->next = even->next;    // Connect odd nodes
        odd = odd->next;           // Move to the next odd node
        even->next = odd->next;    // Connect even nodes
        even = even->next;         // Move to the next even node
    }

    odd->next = evenHead; // Append the even nodes at the end of the odd nodes
    return head;
}



int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    Node* head = arrayToLinkedList(arr, size);

Node *x=order(head);
    Node* temp = x;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
       temp = temp->next;
    }
    cout << "nullptr" << endl;


    return 0;
}