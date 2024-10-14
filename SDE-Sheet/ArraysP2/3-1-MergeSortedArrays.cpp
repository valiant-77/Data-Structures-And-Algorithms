#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int arr2[],int n,int m)
{
    int first=0;
    int second=0;
    int k=0;
    int ans[n+m];
    
    while(first<n && second<m)
    {
        if(arr1[first]<=arr2[second])
        {
            ans[k]=arr1[first];
            first++;
            k++;
        }
        
        else{
        ans[k]=arr2[second];
        second++;
        k++;
        }
        
    }
    
    while(first<n)
    {
        ans[k]=arr1[first];
        first++;
        k++;
    }
    
    while(second<m)
    {
        ans[k]=arr2[second];
        second++;
        k++;
    }
    
    for(int i=0;i<k;i++)
    {
        cout<<ans[i]<<" ";
    }
}


int main()
{
    int arr1[]={1,2,3,0,0,0};
    int n= sizeof(arr1) / sizeof(arr1[0]);
    
    int arr2[]={2,5,6};
    int m= sizeof(arr2) / sizeof(arr2[0]);
    
    merge(arr1,arr2,n,m);
    
    return 0;
}