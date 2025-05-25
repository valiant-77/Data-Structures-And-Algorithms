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

int cylcelen(Node *head) 
{
        
        Node *slow = head;
        Node *fast = head;
        

        
        while (fast != nullptr && fast->next != nullptr) 
        {
            
            slow = slow->next;
            
            fast = fast->next->next;

            
            if (slow == fast) 
            {
                slow=head;
                
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                
                break;
            }
        }
        
        if (fast == nullptr || fast->next == nullptr) 
        {
    return 0; 
      }

        Node *start=slow;
        int count=1;
        Node* temp=slow;
        while(temp->next!=start)
        {
            temp=temp->next;
            count++;
        }

        
        return count;
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

   cout<<cylcelen(one);
   

    return 0;
}