#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int n,int start,int end)
{
    int pivot=arr[end];
    int pindex=start;

    for(int i=start;i<end;i++)
    {
        if(arr[i]<pivot)
        {
            swap(arr[i],arr[pindex]);
            pindex++;
        }        
    }

    swap(arr[end],arr[pindex]);

    return pindex;
}


void quickSort(int arr[],int n,int start,int end)
{
    if(start<end)
    {
       int p = partition(arr,n ,start,end);
       quickSort(arr,n,start,p-1);
       quickSort(arr,n,p+1,end);

    }
}

int main()
{
 
 int n;
 cout<<"Enter n of array: "<<endl;
 cin>>n;
 int myarray[n];
 
 cout<<"Enter "<<n<<" integers in any order: "<<endl;
 for(int i=0;i<n;i++)
 {
 cin>>myarray[i];
 }
 cout<<"Before Sorting"<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<myarray[i]<<" ";
 }
 cout<<endl;
 
 quickSort(myarray,n,0,(n-1));  // quick sort called
 
 cout<<"After Sorting"<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<myarray[i]<<" ";
 }
 
 return 0;
}