#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n) {
    int mini = INT_MAX;  // Minimum price so far
    int buyDay = -1;     // Best day to buy
    int sellDay = -1;    // Best day to sell
    int maxi = 0;        // Maximum profit so far
    int minIndex = -1;   // Index of the minimum price (buy day)

    for (int i = 0; i < n; i++) {
        // Update the minimum price and store the index (buy day)
        if (arr[i] < mini) {
            mini = arr[i];
            minIndex = i;  // Update buy day
        }
        
        // Calculate profit if selling on day i
        int profit = arr[i] - mini;

        // Update maximum profit and store the best sell day
        if (profit > maxi) {
            maxi = profit;
            buyDay = minIndex;  // Update buy day to the index of the minimum price
            sellDay = i;        // Update sell day to the current day
        }
    }

    cout << "Best day to buy: " << buyDay << endl;
    cout << "Best day to sell: " << sellDay << endl;
    cout << "Maximum profit: " << maxi << endl;

    return maxi;
}

int main() {
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    solve(arr, n);
    return 0;
}
