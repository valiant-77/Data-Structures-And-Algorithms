#include <bits/stdc++.h>
using namespace std;

int main() {
    int row = 6;  // Pascal's Triangle row number (1-indexed)
    int col = 0;  // Pascal's Triangle column number (1-indexed)

    int n = row - 1;  // For binomial coefficient, n = row - 1
    int r = col - 1;  // For binomial coefficient, r = col - 1

    int value = 1;  // Initialize the first value in the row as 1

    // Calculate the value at the r-th position (0-indexed) in the n-th row
    for (int i = 0; i < r; i++) {
        value = value * (n - i) / (i + 1);  // Update the binomial coefficient iteratively
    }

    cout << "The value at row " << row << " and column " << col << " in Pascal's Triangle is: " << value << endl;

    return 0;
}