#include <bits/stdc++.h>
using namespace std;

// Stack Class that acts as a queue
class Stack {

    queue<int> q;

public:
    void push(int data)
    {
        int s = q.size();

        // Push the current element
        q.push(data);

        // Pop all the previous elements and put them after
        // current element

        for (int i = 0; i < s; i++) 
        {
            // Add the front element again
            q.push(q.front());

            // Delete front element
            q.pop();
        }
    }
    void pop()
    {
        if (q.empty())
            cout << "No elements\n";
        else
            q.pop();
    }
    
    int top() 
    { 
        if(q.empty()) return -1;
        
        else return q.front();
        
    }
    
    int size() 
    { 
        return q.size(); 
        
    }
    bool empty() 
    { 
        return (q.empty()); 
        
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "current size: " << st.size() << "\n";
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    cout << "current size: " << st.size();
    return 0;
}