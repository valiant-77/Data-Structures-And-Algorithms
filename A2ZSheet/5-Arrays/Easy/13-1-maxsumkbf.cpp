#include <iostream>
#include <algorithm> // For std::max

using namespace std;

int longestSubarrayWithSumK(int arr[], int n, int k) {
    int maxi = 0; // Variable to store the maximum length of subarray with sum k

    // Iterate over the array
    for (int i = 0; i < n; i++) {
        int sum = 0; // Initialize sum for the current subarray
        int count = 0; // Variable to track the length of the current subarray

        // Try to find the subarray starting from index i
        for (int j = i; j < n; j++) {
            sum += arr[j]; // Add the current element to the sum
            count++; // Increment the count for the current subarray

            if (sum == k) {
                maxi = max(maxi, count); // Update maxi if a valid subarray is found
            } else if (sum > k) {
                break; // No need to continue if the sum exceeds k
            }
        }
    }

    return maxi; // Return the maximum length of the subarray with sum k
}

int main() {
    int arr[] = {2, 3, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int k = 5; // Desired sum

    int result = longestSubarrayWithSumK(arr, n, k);
    cout << "The length of the longest subarray with sum " << k << " is: " << result << endl;

    return 0;
}
