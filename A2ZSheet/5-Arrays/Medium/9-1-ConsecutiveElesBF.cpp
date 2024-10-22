#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n)
{
    int maxi=INT_MIN;
    
    for(int i=0;i<n;i++)
    
    {
        int ele=arr[i];
        int count=1;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==ele+1)
            {
                count++;
                ele++;
                j=-1;
            }
        }
        
        maxi=max(maxi,count);
    }
    
    return maxi;
}

int main()
{
    int arr[]={100,200,3,2,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<solve(arr,n);
    
    return 0;
}