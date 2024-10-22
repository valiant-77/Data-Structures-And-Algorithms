#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n) {
    int m = n / 2;
    map<int, int> mp;
    
    // Counting the frequency of each element in the array
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++; 
    }
    
    // Checking if any element's frequency is greater than n/2
    for (auto it : mp) {  // Corrected range-based loop
        if (it.second > m) {
            return it.first;
        }
    }
    
    return -1; // Return -1 if no majority element is found
}

int main() {
    int myArray[] = {2, 2, 1, 1, 1, 2, 2};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    cout << solve(myArray, size) << endl;

    return 0;
}
