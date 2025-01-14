//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>
using namespace std;
int missingn(int arr[],int n)
{   

int counter=1;

for(int i=0;i<n;i++)
{
    if(arr[i]==counter)
    {
       counter++;

    }

    else 
    return counter;
}

return counter;

}


int main(){
    int n;
    cin>>n;
    int arr[n];



    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }

   

    cout<<missingn(arr,n);

   

    return 0;
}