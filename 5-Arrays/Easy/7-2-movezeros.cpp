//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>
using namespace std;
void moveZeros(int arr[],int n)
{   

int z=0;
for(int i=0;i<n;i++)
{
    if(arr[i]!=0)
    {
        swap(arr[i],arr[z]);
        z++;
    }
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

   

    moveZeros(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}