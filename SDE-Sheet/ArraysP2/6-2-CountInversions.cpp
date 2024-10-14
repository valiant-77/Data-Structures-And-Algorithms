#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp; // temporary array
    int left = start;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    // Modification 1: cnt variable to count the pairs:
    int cnt = 0;

    // storing elements in the temporary array in a sorted manner
    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); // Modification 2
            right++;
        }
    }

    // if elements on the left half are still left
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // if elements on the right half are still left
    while (right <= end) {
        temp.push_back(arr[right]);
        right++;
    }

    // transferring all elements from temporary to arr
    for (int i = start; i <= end; i++) {
        arr[i] = temp[i - start];
    }

    return cnt; // Modification 3
}

int mergeSort(vector<int> &arr, int start, int end) {
    int cnt = 0;
    if (start >= end) return cnt;
    int mid = (start + end) / 2;
    cnt += mergeSort(arr, start, mid);    // left half
    cnt += mergeSort(arr, mid + 1, end);  // right half
    cnt += merge(arr, start, mid, end);   // merging sorted halves
    return cnt;
}

int numberOfInversions(vector<int> &a, int n) {
    // Count the number of pairs:
    return mergeSort(a, 0, n - 1);
}

int main() {
    vector<int> a = {5, 4, 3, 2, 1};
    int n = 5;
    int cnt = numberOfInversions(a, n);
    cout << "The number of inversions are: " << cnt << endl;
    return 0;
}
