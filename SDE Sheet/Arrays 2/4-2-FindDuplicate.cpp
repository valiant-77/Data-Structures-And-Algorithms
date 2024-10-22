#include<bits/stdc++.h>
using namespace std;

int dupli(int arr1[],int n)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr1[i]]++;
    }
    
    for(auto it:mp)
    {
        if(it.second>1)
        {
            return it.first;
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