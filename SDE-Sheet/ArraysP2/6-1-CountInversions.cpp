#include<bits/stdc++.h>
using namespace std;

int inversions(int arr1[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr1[i]>arr1[j])
            {
                cout<<arr1[i]<<","<<arr1[j]<<"   ";
                count++;
            }
        }
    }
    
    cout<<endl;
    
    return count;
}




int main()
{
    int arr1[]={5,3,2,4,1};
    int n= sizeof(arr1) / sizeof(arr1[0]);
    
    
    
    cout<<inversions(arr1,n);
    
    return 0;
}