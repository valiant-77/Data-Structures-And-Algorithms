#include<bits/stdc++.h>
using namespace std;

int SingleEle(int arr[],int n)
{
    int low =0;
    int high=n-1;

    while(low<high)
    {
        int mid=(low+high)/2;

        if(mid%2==1)
        {
            mid--;
        }

        if(arr[mid]==arr[mid+1])
        {
            low=mid+2;
        }

        else
        {
            high=mid;
        }
    }

    return arr[low];
}

int main()
{
    int arr[]={1,1,2,2,3,4,4};
    int n=sizeof(arr) / sizeof(arr[0]);

    

    cout<<SingleEle(arr,n);

    return 0;
}