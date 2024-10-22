#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> &arr, int n, int m, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == k)
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
   int x= search(arr, n, m, k) ;

    if(x==true)
    {
       cout<<"found";
    }

    else{
    cout<<"not found";
    }


    return 0;
}
