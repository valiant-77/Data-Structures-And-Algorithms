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
        
        Node* temp = head;  

        unordered_map<Node*, int> nodeMap;  

        
        while (temp != nullptr) 
        {
           
            if (nodeMap.find(temp) != nodeMap.end()) 
            {
                return true;
            }
            
            nodeMap[temp] = 1;
            
            
            temp = temp->next;  
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