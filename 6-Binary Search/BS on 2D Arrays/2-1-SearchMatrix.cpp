#include<bits/stdc++.h>
using namespace std;

bool solve(vector<vector<int>>&arr,int x)
{
    
    int n=arr.size();
    int m=arr[0].size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x)
            return true;
        }
    }
    
    
    return false;
    
}


int main()
{
    vector<vector<int>> v = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int k = 3;

    cout << solve(v, k);

    return 0;
}
