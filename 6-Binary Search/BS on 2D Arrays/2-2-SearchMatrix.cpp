#include<bits/stdc++.h>
using namespace std;

// Binary search function
int bs(vector<int>&v, int target)
{
    int n = v.size();
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
        {
            return 1;
        }
        else if (target < v[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return 0;
}

// Solve function to search target in 2D matrix
bool solve(vector<vector<int>>& arr, int k)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (bs(arr[i], k))
        {
            return true; // Return true as soon as the target is found
        }
    }

    return false; // Return false if the target is not found in any row
}

int main()
{
    vector<vector<int>> v = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int k = 3;

    cout << solve(v, k);

    return 0;
}
