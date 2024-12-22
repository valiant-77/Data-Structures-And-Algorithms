 #include <bits/stdc++.h>
using namespace std;

// Define a Node structure
class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    
    // Constructor to initialize a new node
    public:
    Node(int d,Node* n,Node* p)
    {
        data=d;
        next=n;
        prev=p;
      
    }
    
    public:
    Node(int d){
        data=d;
        next=nullptr;
        prev=nullptr;
        
    }
};
    


Node* arrayToDll(int arr[], int size) {
    if (size == 0) return nullptr;

    // Create head of the linked list
    Node* head = new Node(arr[0]);
    Node* current = head;

    // Iterate through the array and create linked list nodes
    for (int i = 1; i < size; i++) {
        Node* temp = new Node(arr[i]);
        current->next = temp; // Set the next pointer
        temp->prev = current; // Set the prev pointer
        current = temp;       // Move to the next node
    }

    return head;
}


Node* deletion(Node* head,int k)
{
     if (k <= 0 || head == nullptr) return head;
    
    
    if (k == 1) {  // Special case for deleting the first node
        Node* current = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete current;
        return head;
    }
    
    Node* current=head;
    Node* last=nullptr;
    int count=1;
    
    while(current->next!=nullptr)
    {
        
        if(count==k)
        {
            last->next=current->next;
            current->next->prev=last;
            delete current;
           return head;
        }
        
        last=current;
        current=current->next;
        count++;
    }
    
    if (count==k)
    {
        last->next=nullptr;
        delete current;
    }
    

   
  
    return head;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    Node* head = arrayToDll(arr, size);

    Node* x=deletion(head,4);
    // Print the linked list
    Node* temp = x;
    while (temp != nullptr) {
        cout <<temp->data<<" ";
       temp = temp->next;
    }
    cout << "nullptr" << endl;


    return 0;
}