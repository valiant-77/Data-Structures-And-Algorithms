#include<bits/stdc++.h>
using namespace std;

void recins(int arr[],int n,int i)
{
    if(i==n)
    return;
    
    int key=arr[i];
    int j=i-1;

    while(j>=0 && arr[j]>key)
    {
        
        arr[j+1]=arr[j];
        j--;
        
    }

    arr[j+1]=key;
    
    

    recins(arr,n,i+1);
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


    recins(arr,n,1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}