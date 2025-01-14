//TC= O(n)
//SC=O(n)

#include <bits/stdc++.h>
using namespace std;
void leftrotate(int arr[],int n)
{
    int temp[n];
    

    for(int i=1;i<n;i++)
    {
        temp[i-1]=arr[i];
    }

    temp[n-1]=arr[0];

    for(int j=0;j<n;j++)
    {
        cout<<temp[j];
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

    leftrotate(arr,n);
}