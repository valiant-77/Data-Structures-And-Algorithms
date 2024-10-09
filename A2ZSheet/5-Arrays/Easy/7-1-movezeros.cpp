//TC= O(2n)
//SC=O(n)

#include <bits/stdc++.h>
using namespace std;
void moveZeros(int arr[],int n)
{
    int temp[n];
    int nz=0;

    //copy all non zero elements into temp array
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
          temp[nz]=arr[i];
          nz++;
        }        
    }

//store all non zero elements from temp array to orginal array from start 
for(int i=0;i<nz;i++)
{
    arr[i]=temp[i];
}

//from the end of non zero elements position start filling all places till end of the array with 0s
for(int i=nz;i<n;i++)
{
    arr[i]=0;
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