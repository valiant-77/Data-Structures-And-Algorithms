//O(n)

#include <bits/stdc++.h>

using namespace std;

void rev(int start, int ar[], int n, int end)
{
    if (start >= end)
    {
        return;
    }

    swap(ar[start], ar[end]);

    rev(start + 1, ar, n, end - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)  
    {
        cin >> arr[i];
    }

    rev(0, arr, n, n - 1);

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}
