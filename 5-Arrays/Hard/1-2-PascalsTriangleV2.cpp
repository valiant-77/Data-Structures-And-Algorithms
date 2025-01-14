#include <bits/stdc++.h>
using namespace std;

int main() {
    int row = 5;  // Pascal's Triangle row number (1-indexed)
      

    int n = row-1 ;  // For binomial coefficient, n = row - 1
    

    int value = 1;  // Initialize the first value in the row as 1

    
    for (int i = 0; i < row; i++) {
        cout<<value<<" ";
        value = value * (n - i) / (i + 1);  // Update the binomial coefficient iteratively
        
    }

    

    return 0;
}
