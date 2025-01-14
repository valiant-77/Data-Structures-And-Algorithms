#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(int arr[], int n, int k) {
    int maxi = 0; // Initialize to 0, as no valid subarray may be found

    // Iterate over the array
    for (int i = 0; i < n; i++) {
        int sum = 0; // Initialize sum for the current subarray

        // Try to find the subarray starting from index i
        for (int j = i; j < n; j++) {
            sum += arr[j]; // Add the current element to the sum

            if (sum == k) {
                maxi = max(maxi, j - i + 1); // Update maxi if a valid subarray is found
            }

            // For cases where k != 0, stop if sum exceeds k
            else if (sum > k && k != 0) {
                break;
           
        }
    }
}
    return maxi; // Return the maximum length of the subarray with sum k

}

int main() {
    int arr[] = {9, -3, 3, -1, 6, -5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int k = 0; // Desired sum

    int result = longestSubarrayWithSumK(arr, n, k);
    cout << "The length of the longest subarray with sum " << k << " is: " << result << endl;

    return 0;
}
