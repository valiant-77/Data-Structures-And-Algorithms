#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int data1) {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1) {
        val = data1;
        next = next1;
    }
};

    //Function to add two numbers as linked list
    ListNode* reverseList(ListNode* head) {

        ListNode* temp=head;
        
        ListNode* prev=nullptr;

        while(temp!=nullptr)
        {
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
            
        }

        return prev;
        
    }


// Function to print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    //Manual creation of linked list
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    

    //Instance of solution class
    
    ListNode* result = reverseList(l1);

    // Print the result
    printList(result);

    return 0;
}