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

Node* nfromback(Node* &head, int k) {
    if (head == nullptr) {
      
        return nullptr;
    }

    // Calculate the total length of the list.
    Node* current = head;
    int cnt = 0;
    while (current != nullptr) {
        current = current->next;
        cnt++;
    }

    // Determine the position of the node to remove from the beginning.
    int removal = cnt - k + 1;

    // If the removal index is out of bounds, return.
    if (removal <= 0 || removal > cnt) {
        
        return nullptr;
    }

    // If the node to remove is the head node.
    if (removal == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp=head;
      Node* prev=nullptr;
      int count=1;

      while(temp!=nullptr)
      {
        if(count==removal)
        {
            prev->next=temp->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
        count++;
      }

      return head;
}




int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    Node* head = arrayToLinkedList(arr, size);

Node *x=nfromback(head,3);
    Node* temp = x;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
       temp = temp->next;
    }
    cout << "nullptr" << endl;


    return 0;
}