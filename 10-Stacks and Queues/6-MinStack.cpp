#include <iostream>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

class MinStack {
public:
    stack<pair<int, int>> st; // Stack to store pairs (value, minimum)

    MinStack() {
        // No special initialization needed
    }
    
    void push(int val) {
        if (st.empty()) {
            st.push({val, val}); // If stack is empty, value itself is the minimum
        } else {
            st.push({val, min(val, st.top().second)}); // Push value and current minimum
        }
    }
    
    void pop() {
        st.pop(); // Remove the top element
    }
    
    int top() {
        return st.top().first; // Return the top value
    }
    
    int getMin() {
        return st.top().second; // Return the minimum value
    }
};

// Main function to test the MinStack class
int main() {
    MinStack minStack;

    // Pushing elements onto the stack
    minStack.push(5);
    minStack.push(3);
    minStack.push(7);
    minStack.push(2);

    cout << "Top element: " << minStack.top() << endl;       // Output: 2
    cout << "Minimum element: " << minStack.getMin() << endl; // Output: 2

    minStack.pop(); // Remove top element

    cout << "Top element after pop: " << minStack.top() << endl;       // Output: 7
    cout << "Minimum element after pop: " << minStack.getMin() << endl; // Output: 3

    minStack.pop(); // Remove top element
    minStack.pop(); // Remove top element

    cout << "Top element after more pops: " << minStack.top() << endl;       // Output: 5
    cout << "Minimum element after more pops: " << minStack.getMin() << endl; // Output: 5

    return 0;
}
