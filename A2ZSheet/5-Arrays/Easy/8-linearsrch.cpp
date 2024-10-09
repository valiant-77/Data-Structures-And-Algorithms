//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>
using namespace std;
int linearsrch(int arr[],int n)
{   

int query;
cin>>query;
for(int i=0;i<n;i++)
{
    if(arr[i]==query)
    {
       return i;
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

   

    cout<<linearsrch(arr,n);

   

    return 0;
}