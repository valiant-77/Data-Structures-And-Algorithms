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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;

        int carry=0;

        while((l1!=nullptr || l2!=nullptr) || (carry!=0))
        {
            int sum=0;

            if(l1!=nullptr)
            {
                sum=sum+(l1->val);
                l1=l1->next;
            }

            if(l2!=nullptr)
            {
                sum=sum+(l2->val);
                l2=l2->next;
            }

            sum=sum+carry;
            carry=sum/10;

            ListNode *newNode=new ListNode(sum%10);

            temp->next=newNode;
            temp=temp->next;
        }

        return dummy->next;
        
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
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    //Instance of solution class
    
    ListNode* result = addTwoNumbers(l1, l2);

    // Print the result
    printList(result);

    return 0;
}