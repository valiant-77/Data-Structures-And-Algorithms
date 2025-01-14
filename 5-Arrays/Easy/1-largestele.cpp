//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>

using namespace std;

void largestele(int arr[],int n){

    int max=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<max;

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    largestele(arr,n);
}
