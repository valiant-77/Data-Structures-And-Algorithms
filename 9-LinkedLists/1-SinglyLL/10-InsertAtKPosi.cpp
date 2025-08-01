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




Node* insertAtKthPosition(Node* head,int v,int place)
{
    if(place<1)
    {
        return nullptr;
    }
    
    if(place==1)
    {
       Node* newNode=new Node(v);
       newNode->next=head;
       return newNode;
    }
    
    int count=1;
    Node* current=head;
    Node* prev=nullptr;
    Node* newNode=new Node(v);
    while(current!=nullptr)
    {
        
        
        if(count==place)
        {
             
            newNode->next=current;
            prev->next=newNode;
            
        }
        prev=current;
        current=current->next;
        count++;
    }
    
    
    return head;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    Node* head = arrayToLinkedList(arr, size);

   Node* newHead=insertAtKthPosition(head,4,3);
    // Print the linked list
    Node* temp = newHead;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
       temp = temp->next;
    }
    cout << "nullptr" << endl;


    return 0;
}