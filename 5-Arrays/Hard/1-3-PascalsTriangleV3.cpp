#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int rows= 5;  // Number of rows in Pascal's Triangle

    // Iterate through each row
    for (int n = 0; n < rows; n++) 
{
        int value = 1;  // The first value in each row is always 1
        
        // Print all values in the current row using binomial coefficients
        for (int i = 0; i <= n; i++) 
       {
            cout << value << " ";  // Output the current value
            
            // Update the value for the next element in the row
            value = value * (n - i) / (i + 1);
        }
        
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
