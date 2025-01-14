#include <bits/stdc++.h>
using namespace std;

int mooresVotingAlgorithm(int arr[], int n) {
    int candidate = -1, count = 0;

    // Step 1: Find a candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return (count > n / 2) ? candidate : -1;
}

int main() {
    int myArray[] = {2, 2, 1, 1, 1, 2, 2};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    cout << mooresVotingAlgorithm(myArray, size) << endl;

    return 0;
}
