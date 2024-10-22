#include<bits/stdc++.h>
using namespace std;

int dupli(int arr1[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr1[j]==arr1[i])
            {
                return arr1[j];
            }
        }
    }
    
    return -1;
}




int main()
{
    int arr1[]={1,3,2,4,2};
    int n= sizeof(arr1) / sizeof(arr1[0]);
    
    
    
    cout<<dupli(arr1,n);
    
    return 0;
}