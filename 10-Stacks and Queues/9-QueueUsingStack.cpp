#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
stack<int>s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(empty()) return -1;

        if(s2.empty())
        {
            while(s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
       
       int x=s2.top();
       s2.pop();
       return x;
    }
    
    int peek() {
      if(empty()) return -1;

        if(s2.empty())
        {
            while(s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
       
       return s2.top();
        
    }
    
    bool empty() {
        
        return s1.empty() && s2.empty();
    }
};


int main()
{
   MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(7);
    
    cout<<q.peek()<<endl;

    cout<<q.pop()<<endl;

    cout<<q.peek();

    return 0;


}