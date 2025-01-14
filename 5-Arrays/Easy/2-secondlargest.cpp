//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>

using namespace std;

void largestele(int arr[],int n){

    int max=arr[0];
    int secondmax=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            secondmax=max;
            max=arr[i];
            
        }

        else if(arr[i]>secondmax && arr[i]<max)
        {
            secondmax=arr[i];
        }
    }

    cout<<max<<endl<<secondmax;

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
