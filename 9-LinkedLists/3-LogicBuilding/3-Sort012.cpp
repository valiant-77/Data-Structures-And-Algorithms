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

Node* dnf(Node* head)
{
    
    if (head == nullptr || head->next == nullptr) {
        return head; // If the list is empty or has only one node, no rearrangement is needed.
    }
    
    int cnt0=0;
    int cnt1=0;
   int cnt2=0;
   
   Node* current=head;
   
   while(current!=nullptr)
   {
       if(current->data==0)
       {
           cnt0++;
       }
       
       else if(current->data==1)
       {
           cnt1++;
       }
       
       else if(current->data==2)
       {
           cnt2++;
       }
       current=current->next;
   }
   
   
    Node *temp=head;
   while(temp!=nullptr)
   {
       if(cnt0>0)
       {
           temp->data=0;
           cnt0--;
       }
       
       else if(cnt1>0)
       {
           temp->data=1;
           cnt1--;
       }
       
       else if(cnt2>0)
       {
           temp->data=2;
           cnt2--;
       }
       
       temp=temp->next;
   }
   
   return head;
   

}



int main() {
    int arr[] = {0,1,2,2,1,0,0};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    Node* head = arrayToLinkedList(arr, size);

Node *x=dnf(head);
    Node* temp = x;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
       temp = temp->next;
    }
    cout << "nullptr" << endl;


    return 0;
}