#include<bits/stdc++.h>
using namespace std;

int SmallestDivisor(vector<int>&arr,int limit)
{
    int n=arr.size();

    int maxi=INT_MIN;

   for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }

    for (int d = 1; d <= maxi; d++) 
    {
        //Find the summation result:
        int sum = 0;
        for (int i = 0; i < n; i++) 
        {
            sum += ceil((double)(arr[i]) / (double)(d));
        }
        if (sum <= limit)
            return d;
    }
    return -1;

    
}





int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = SmallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}