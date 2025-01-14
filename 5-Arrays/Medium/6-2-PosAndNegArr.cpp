#include<bits/stdc++.h>
using namespace std;

void RearrangebySign(int arr[], int n) {
    // Create arrays for storing positive and negative elements.
    int pos[n];
    int neg[n];
    
    int posCount = 0, negCount = 0;

    // Segregate the array into positives and negatives.
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos[posCount++] = arr[i];
        } else {
            neg[negCount++] = arr[i];
        }
    }

    int index = 0;
    int i = 0, j = 0;

    // Place positive and negative numbers alternately.
    while (i < posCount && j < negCount) {
        arr[index++] = pos[i++];
        arr[index++] = neg[j++];
    }

    // If there are remaining positive numbers.
    while (i < posCount) {
        arr[index++] = pos[i++];
    }

    // If there are remaining negative numbers.
    while (j < negCount) {
        arr[index++] = neg[j++];
    }
}

int main() {
    int arr[] = {3, 1, -2, -5, 2, -4, 6};  // Example array with unequal positives and negatives
    int n = sizeof(arr) / sizeof(arr[0]);

    RearrangebySign(arr, n);
  
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
