
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    int min_index = 0;  // Start with the first index as the minimum index

    while (low <= high) {
        int mid = (low + high) / 2;

        // if left part is sorted:
        if (arr[low] <= arr[mid]) {
            // Update min_index if arr[low] is the smallest seen so far
            if (arr[low] < arr[min_index]) {
                min_index = low;
            }

            // Eliminate left half:
            low = mid + 1;
        } else { // if right part is sorted:
            // Update min_index if arr[mid] is the smallest seen so far
            if (arr[mid] < arr[min_index]) {
                min_index = mid;
            }

            // Eliminate right half:
            high = mid - 1;
        }
    }

    int mini=arr[min_index];
    return mini;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The minimum element is: " << ans << "\n";
    return 0;
}

