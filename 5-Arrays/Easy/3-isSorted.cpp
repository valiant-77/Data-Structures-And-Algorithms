//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>

using namespace std;

void isSorted(int arr[],int n){

    

    for(int i=0;i<n-1;i++)//till n-1 cuz when current element is the last element to check i+1 it goes out of bounds
    {
        if(arr[i]>arr[i+1])
        {
           cout<<"Array is not sorted";
           return;
        }
    }

    cout<<"Array is sorted";

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    isSorted(arr,n);

    return 0;
}
