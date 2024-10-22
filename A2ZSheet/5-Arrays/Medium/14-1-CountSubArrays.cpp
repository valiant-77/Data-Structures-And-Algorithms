#include <iostream>
#include <algorithm> // For std::max

using namespace std;

int longestSubarrayWithSumK(int arr[], int n, int k) {
   
int count=0;
    // Iterate over the array
    for (int i = 0; i < n; i++) {
        int sum = 0; // Initialize sum for the current subarray

        // Try to find the subarray starting from index i
        for (int j = i; j < n; j++) {
            sum += arr[j]; // Add the current element to the sum
            

            if (sum == k) {
                count++;
        }
    }
    }

    return count; // Return the maximum length of the subarray with sum k
}

int main() {
    int arr[] = {2, 3, -1,1}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int k = 2; // Desired sum

    
    cout << longestSubarrayWithSumK(arr, n, k);

    return 0;
}
