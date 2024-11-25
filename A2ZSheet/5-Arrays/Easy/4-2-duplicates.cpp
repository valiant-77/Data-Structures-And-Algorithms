//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>

using namespace std;

int duplicates(int arr[],int n){

    int j=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[j]=arr[i];
            j++;
        }
    }

    return j;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int neww=duplicates(arr,n);

 for(int i=0;i<neww;i++)

 {
    cout<<arr[i];
 }
 


    return 0;
}