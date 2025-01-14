#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // Add extra space to nums1 to accommodate nums2
    nums1.resize(m + n);

    // Pointers for nums1 and nums2 starting from the last valid elements
    int i = m - 1;  // pointer for nums1 (initialized elements)
    int j = n - 1;  // pointer for nums2
    int k = m + n - 1;  // pointer for placing elements in nums1 from the end

    // Merge nums1 and nums2 from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If there are any remaining elements in nums2
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    // Array nums1 without pre-allocated extra space
    vector<int> nums1 = {0,4,7,8,12,15}; // No extra space initially
    int m = 6;  // Number of initialized elements in nums1
    vector<int> nums2 = {2, 5, 6}; // Array nums2
    int n = 3;  // Number of elements in nums2

    merge(nums1, m, nums2, n);

    // Output the merged array
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
