#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n) {
    // Step 1: Initialize tortoise and hare
    int tortoise = arr[0];
    int hare = arr[0];

    // Step 2: Move tortoise by 1 step and hare by 2 steps
    do {
        tortoise = arr[tortoise]; // Tortoise moves 1 step
        hare = arr[arr[hare]];    // Hare moves 2 steps
    } while (tortoise != hare);   // They meet inside the cycle

    // Step 3: Find the entrance to the cycle (duplicate element)
    tortoise = arr[0];            // Move tortoise back to start
    while (tortoise != hare) {     // Move both tortoise and hare 1 step at a time
        tortoise = arr[tortoise];
        hare = arr[hare];
    }

    // Step 4: Return the duplicate element
    return hare;
}

int main() {
    int arr1[] = {1, 3, 4, 2, 2};  // Example input
    int n = sizeof(arr1) / sizeof(arr1[0]) - 1;  // n should be one less than the array size

    cout << findDuplicate(arr1, n);

    return 0;
}
