 #include <bits/stdc++.h>
using namespace std;
 
 int maxLen(int arr[], int n) {
        // Map to store the prefix sums and their earliest occurrence index
        map<long long, int> preSumMap;
        long long sum = 0;
        int maxi = 0;
        
        for (int i = 0; i < n; i++) {
            // Calculate the prefix sum till index i:
            sum += arr[i];

            // If the sum is 0, update the maximum length:
            if (sum == 0) {
                maxi = max(maxi, i + 1);
            }

            // If the prefix sum has been seen before, calculate the length of the subarray
            if (preSumMap.find(sum) != preSumMap.end()) {
                int len = i - preSumMap[sum];
                maxi = max(maxi, len);
            } else {
                // Store the first occurrence of the prefix sum
                preSumMap[sum] = i;
            }
        }

        return maxi;
    }


  int main() {
    int arr[] = {9, -3, 3, -1, 6, -5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    

    int result = maxLen(arr, n);
    cout << "The length of the longest subarray with sum " << "0" << " is: " << result << endl;

    return 0;
}  