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




Node* insertBeforeX(Node* head,int v,int k)
{
    Node* newNode=new Node(k);
    
    if(v==head->data)
    {
        newNode->next=head;
        
        return newNode;
    }
    
    
  
    Node* current=head;
    Node* prev=nullptr;
    
    while(current!=nullptr)
    {
        
        
        if(v==current->data)
        {
             
            newNode->next=current;
            prev->next=newNode;
            
        }
        prev=current;
        current=current->next;
       
    }
    
    
    
    return head;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    Node* head = arrayToLinkedList(arr, size);

   Node* newHead=insertBeforeX(head,4,3);
    // Print the linked list
    Node* temp = newHead;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
       temp = temp->next;
    }
    cout << "nullptr" << endl;


    return 0;
}