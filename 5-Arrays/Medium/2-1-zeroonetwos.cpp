#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n)
{
    int j=0;
    int count=0;
    while(count<=2)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==count)
            {
                swap(arr[i],arr[j]);
                j++;
            }
        }
        count++;
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
    
    solve(arr,n);
    
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}