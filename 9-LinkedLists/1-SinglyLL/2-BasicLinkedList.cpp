#include<bits/stdc++.h>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

/*public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }*/
    
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

int main() {
    vector<int> arr = {2, 5, 8, 7};
    
    /*Assigning values to 
    the nodes*/
    Node* y1 = new Node(arr[0]);
    Node* y2 = new Node(arr[1]);
    Node* y3 = new Node(arr[2]);
    Node* y4 = new Node(arr[3]);

    /**Linking of
     * Nodes*/
    y1->next = y2;
    y2->next = y3;
    y3->next = y4;

    /**Printing Nodes with their 
     * values and data*/
    cout << y1->data << " " << y1->next << "\n";
    cout << y2->data << " " << y2->next << "\n";
    cout << y3->data << " " << y3->next << "\n";
    cout << y4->data << " " << y4->next << "\n";

    return 0;
}