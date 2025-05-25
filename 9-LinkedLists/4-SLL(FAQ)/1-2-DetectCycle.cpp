#include<bits/stdc++.h>
using namespace std;

class Node{

   public:
    int data;
    Node* next;

    public:
    Node(int data1)
    {
      data=data1;
      next=nullptr;
    }

};

bool hasCycle(Node *head) 
{
        
        Node *slow = head;
        Node *fast = head;

        
        while (fast != nullptr && fast->next != nullptr) 
        {
            
            slow = slow->next;
            
            fast = fast->next->next;

            
            if (slow == fast) 
            {
                return true;  
            }
        }

        
        return false;
}

int main()
{
    Node* one=new Node(1);
    Node* two=new Node(2);
    Node* three=new Node(3);
    Node* four=new Node(4);
    Node* five=new Node(5);

    one->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    five->next=two;

    if(hasCycle(one))
    {
        cout<<"true";
    }

    else{
        cout<<"false";
    }

    return 0;
}