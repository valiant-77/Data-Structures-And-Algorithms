//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>
using namespace std;
void leftrotateD(int arr[],int n)
{
    int last=arr[0];

    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }

    arr[n-1]=last;

    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    leftrotateD(arr,n);
}