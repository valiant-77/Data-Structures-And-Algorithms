#include <iostream>
#include <vector>
using namespace std;

void spiralPrint(vector<vector<int>>& matrix) {
    if (matrix.empty()) return; // Handle empty matrix case

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++; // Move the top boundary down

        // Print right column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--; // Move the right boundary left

        if (top <= bottom) {
            // Print bottom row
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--; // Move the bottom boundary up
        }

        if (left <= right) {
            // Print left column
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++; // Move the left boundary right
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    spiralPrint(matrix);
    return 0;
}
