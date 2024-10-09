//TC= O(n/2)

#include<bits/stdc++.h>

using namespace std;

void rev(int i,int ar[],int n)
{
    if(i>=n/2)
    {
       
        return;
    }

    swap(ar[i],ar[n-i-1]);

    rev(i+1,ar,n);

     
 
    
}

int main()
{
    int n;
    cin>>n;
     int arr[n];

     for(int i=0;i<=n-1;i++)
     {
        cin>>arr[i];
     }

     rev(0,arr,n);

    for(int j=0;j<=n-1;j++)
      {
        cout<<arr[j]<<" ";  
      }

return 0;
}
