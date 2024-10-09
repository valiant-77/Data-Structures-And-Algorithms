//TC= O(n)
//SC=O(d)

#include <bits/stdc++.h>
using namespace std;

void leftrotateD(int arr[], int n, int d) {
//d = d % n;  // Handle cases where d >= n
    int temp[d];

    // Storing the first d elements to the temp array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    int count = 0;
    // Shift the remaining elements to the start of the array
    for (int i = d; i < n; i++) {
        arr[count] = arr[i];
        count++;
    }

    // Store the temp elements at the back of the array
    for (int i = 0; i < d; i++) {
        arr[count] = temp[i];
        count++;
    }

    // Print the rotated array
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;  // For better output formatting
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int places;
    cin >> places;

    leftrotateD(arr, n, places);

    return 0;
}
