#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end, int size) {
    int first = start;
    int second = mid + 1;
    int k = start;  // Initialize k to start

    int temp[size];

    while (first <= mid && second <= end)/*to check if the flow is going out of the array*/
    {
        if (arr[first] <= arr[second]) {
            temp[k] = arr[first];
            first++;
            k++;
        } else {
            temp[k] = arr[second];
            second++;
            k++;
        }
    }

    while (first <= mid) //to check if there are elements left in the left sub array
    {
        temp[k] = arr[first];
        first++;
        k++;
    }

    while (second <= end)//to check if there are elements left in the right sub array
    {
        temp[k] = arr[second];
        second++;
        k++;
    }

    for (int p = start; p <= end; p++) {
        arr[p] = temp[p];
    }
}



void mergeSort(int arr[], int start, int end, int size) {
    if (start < end) {
        int mid = (start + end) / 2;

        mergeSort(arr, start, mid, size);
        mergeSort(arr, mid + 1, end, size);

        merge(arr, start,mid, end, size);
    }
}



int main() {
    cout << "Enter size of array: " << endl;
    int size;
    cin >> size;
    int myarray[size];

    cout << "Enter " << size << " integers in any order: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> myarray[i];
    }
    cout << "Before Sorting" << endl;
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }
    cout << endl;
    mergeSort(myarray, 0, (size - 1), size);

    cout << "After Sorting" << endl;
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }

    return 0;
}
