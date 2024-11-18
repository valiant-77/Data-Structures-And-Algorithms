#include<bits/stdc++.h>
using namespace std;

long long SumOfD(vector<int>&arr,int k)
{
    int n=arr.size();
    long long sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+ceil((double)(arr[i])/(double)(k));
    }

    return sum;
}

int minEatingSpeed(vector<int>&arr,int limit)
{
    int n=arr.size();

    int maxi = *max_element(arr.begin(), arr.end());

int low=1;
int high=maxi;
int ans;
while(low<=high)
{
int mid=(low+high)/2;
    long long x=SumOfD(arr,mid);

    if(x<=limit)
    {
        ans=mid;
        high=mid-1;
    }

    else
    {
        low=mid+1;
    }
}

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = minEatingSpeed(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}