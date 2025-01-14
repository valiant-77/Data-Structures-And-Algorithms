#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n)
{
   int maxi=INT_MIN;
   
   for(int i=n-1;i>=0;i--)
   {
       if(arr[i]>maxi)
       {
           maxi=max(maxi,arr[i]);
           cout<<maxi<<" ";
       }
   }
}

int main()
{
    int arr[]={10, 22, 12, 3, 0, 6};
    
    int n= sizeof(arr) / sizeof(arr[0]);
    
    solve(arr,n);
    
    return 0;
}