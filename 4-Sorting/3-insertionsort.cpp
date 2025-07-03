//TC=O(n^2)

#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n ; i++) {
        int key = arr[i];
        int j=i-1;

         while (j >= 0 && arr[j] > key) {
      arr[j+1] = arr[j];
      j = j - 1;
         }

        arr[j + 1] = key;
    }
}

/*void insertion_sort(int arr[], int n) 
{
    for (int i = 0; i <= n - 1; i++)
     {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
}*/

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    insertion_sort(arr, n);

    cout << "Sorted array: ";
    for (int k = 0; k < n; ++k) {
        cout << arr[k] << " ";
    }

    return 0;
}