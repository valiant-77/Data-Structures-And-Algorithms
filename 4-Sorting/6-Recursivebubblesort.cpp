#include<bits/stdc++.h>
using namespace std;

void recbs(int arr[],int n)
{
    if(n==1)
    return;

    for(int j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
        swap(arr[j+1],arr[j]);
        }
    }

    recbs(arr,n-1);
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


    recbs(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}