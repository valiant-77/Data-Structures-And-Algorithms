#include<bits/stdc++.h>
using namespace std;



void dupli(int arr1[],int n)
{
    int s1=(n * (n + 1)) / 2;
    int s2=0;
    int ele;
    
    for(int i=0;i<n;i++)
    {
        s2=s2+arr1[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr1[j]==arr1[i])
            {
                ele=arr1[j];
            }
        }
    }
    
    int missingnum=s1-s2+ele;
    
    cout<<ele<<","<<missingnum;
}




int main()
{
    int arr1[]={3,1,2,5,3};
    int n= sizeof(arr1) / sizeof(arr1[0]);
    
    
    
    dupli(arr1,n);
    
    return 0;
}