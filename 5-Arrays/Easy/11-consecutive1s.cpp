// TC = O(n)
// SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n) {   
    int counter = 0;
    int max_counter = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            counter++;
            max_counter = max(max_counter, counter);
        } else {
            counter = 0;
        }
    }
    return max_counter;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << solve(arr, n);

    return 0;
}
