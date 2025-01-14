#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int first = start;
    int second = mid + 1;

    while (first <= mid && second <= end)
    {
        if (arr[first] <= arr[second])
        {
            temp.push_back(arr[first]);
            first++;
        }
        else
        {
            temp.push_back(arr[second]);
            second++;
        }
    }

    while (first <= mid)
    {
        temp.push_back(arr[first]);
        first++;
    }

    while (second <= end)
    {
        temp.push_back(arr[second]);
        second++;
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i - start];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start +end) / 2; // Fix: Correct way to calculate mid to avoid overflow
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n); // Fix: Use a vector instead of an array

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) // Fix: Use < instead of <= in loop conditions
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "After sorting the array: ";
    for (int i = 0; i < n; i++) // Fix: Use < instead of <= in loop conditions
    {
        cout << arr[i] << " ";
    }

    return 0;
}
