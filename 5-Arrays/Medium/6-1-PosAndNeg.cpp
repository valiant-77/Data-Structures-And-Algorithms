#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
    int temp[n];
    int posIndex = 0, negIndex = 1;

    for (int i = 0; i < n; i++) {
        // Place positive numbers at even indices (0, 2, 4, ...)
        if (arr[i] >= 0 && posIndex < n) {
            temp[posIndex] = arr[i];
            posIndex += 2;
        }
        // Place negative numbers at odd indices (1, 3, 5, ...)
        else if (arr[i] < 0 && negIndex < n) {
            temp[negIndex] = arr[i];
            negIndex += 2;
        }
    }

    // Print the temp array
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
}

int main() {
    int arr[] = {-1,2,3,-2,1,-3};
    int n = sizeof(arr) / sizeof(arr[0]);
    solve(arr, n);
    return 0;
}
