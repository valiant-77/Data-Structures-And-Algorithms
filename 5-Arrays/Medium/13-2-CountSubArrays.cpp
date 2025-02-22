#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp; // Stores the prefix sum and its frequency
    int sum = 0; // The cumulative sum
    int count = 0; // Count of subarrays that sum to k

    // Initialize the presumMap with 0 to handle subarrays that start from index 0
    mp[0] = 1;

    for (int i = 0; i < nums.size(); i++) {
        sum=sum+nums[i];

        int presum=sum-k;
        // If (presum - k) exists in the map, it means there is a subarray that sums to k
        if (mp.find(presum) != mp.end()) {
            count=count+mp[presum];
        }

        // Update the map with the current prefix sum
        mp[sum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {2,3,-1,1}; // Example input
    int k = 2;
    cout << "Number of subarrays with sum " << k << ": " << subarraySum(nums, k) << endl;
    return 0;
}
