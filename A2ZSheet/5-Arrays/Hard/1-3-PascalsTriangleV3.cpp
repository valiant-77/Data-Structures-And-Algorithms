#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 5;  // Number of rows in Pascal's Triangle

    // Iterate through each row
    for (int row = 0; row < x; row++) {
        int value = 1;  // The first value in each row is always 1
        
        // Print all values in the current row using binomial coefficients
        for (int i = 0; i <= row; i++) {
            cout << value << " ";  // Output the current value
            
            // Update the value for the next element in the row
            value = value * (row - i) / (i + 1);
        }
        
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
