#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
    int m = n / 3;
    map<int, int> mp;
    
    // Count frequencies of each element
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++; 
    }
    
    vector<int> v; // To store the majority elements
    // Collect elements that appear more than n/3 times
    for (auto it : mp) {  
        if (it.second > m) {
            v.push_back(it.first);
        }
    }
    
    // Output the result
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int myArray[] = {11,11,33,33,11,33};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    solve(myArray, size);

    return 0;
}
