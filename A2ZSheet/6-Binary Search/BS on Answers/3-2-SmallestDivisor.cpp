#include<bits/stdc++.h>
using namespace std;

int SumOfD(vector<int>&arr,int k)
{
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+ceil((double)(arr[i])/(double)(k));
    }

    return sum;
}

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

int low=1;
int high=maxi;
int ans;
while(low<=high)
{
int mid=(low+high)/2;
    int x=SumOfD(arr,mid);

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
    int ans = SmallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}