#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
    // Step 1: Find two potential candidates
    int count1 = 0, count2 = 0;
    int candidate1 = -1, candidate2 = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate1) {
            count1++;
        } else if (arr[i] == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = arr[i];
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = arr[i];
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    // Step 2: Verify the candidates by counting their occurrences
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate1) {
            count1++;
        } else if (arr[i] == candidate2) {
            count2++;
        }
    }

    // Step 3: Print the valid candidates
    if (count1 > n / 3) {
        cout << candidate1 << " ";
    }
    if (count2 > n / 3) {
        cout << candidate2 << " ";
    }
    cout << endl;
}

int main() {
    int myArray[] = {11, 11, 33, 33, 11, 33};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    solve(myArray, size);

    return 0;
}
