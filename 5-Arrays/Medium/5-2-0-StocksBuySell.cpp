#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n) {
    int mini = INT_MAX;  // Minimum price so far
    int maxi = 0;        // Maximum profit so far

    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);            // Update the minimum price so far
        int profit = arr[i] - mini;          // Calculate profit if selling on day i
        maxi = max(maxi, profit);            // Update maximum profit so far
    }

    return maxi;
}

int main() {
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << solve(arr, n);
    return 0;
}
