#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> &arr, int n, int m, int k)
{
    for (int i = 0; i < n; i++)
    {
        // Check if k can be in row i
        if (k >= arr[i][0] && k <= arr[i][m - 1])
        {
            // Use binary search in the current row
            if (binary_search(arr[i].begin(), arr[i].end(), k))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int k;
    cin >> k;

    // Initialize the 2D vector (matrix)
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Automatically get the number of rows and columns
    int n = arr.size();         // Number of rows
    int m = arr[0].size();      // Number of columns in the first row

    // Call the search function
    cout << (search(arr, n, m, k) ? "Found" : "Not Found") << endl;

    return 0;
}
