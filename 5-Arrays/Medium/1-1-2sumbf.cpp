#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n, int k)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
      
      for(int j=i;j<n;j++)
      {
          sum=arr[i]+arr[j];
          
          if(sum==k)
          {
              cout<<i<<","<<j;
              return;
          }
          
         
      }
    }

    
    
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    solve(arr,n,14);
    
    return 0;
}