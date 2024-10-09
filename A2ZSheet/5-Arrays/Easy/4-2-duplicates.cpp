//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>

using namespace std;

void duplicates(int arr[],int n){

    int j=0;
    for(int i=1;i<n;i++)
    {
        if(arr[j]!=arr[i])
        {
            arr[j+1]=arr[i];
            j++;
        }
    }

    n=j+1;
 
    for(int k=0;k<n;k++)
    {
        cout<<arr[k];
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

    duplicates(arr,n);

    return 0;
}