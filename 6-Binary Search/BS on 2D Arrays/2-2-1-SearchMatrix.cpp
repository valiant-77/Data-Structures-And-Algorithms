#include<bits/stdc++.h>
using namespace std;

int search(vector<int>arr,int tar)
{
    int s=arr.size();
    
    for(int i=0;i<s;i++)
    {
        if(arr[i]==tar)
        {
            return 1;
        }
    }
    return 0;
}

bool range(vector<int>&v,int k)
{
    int start=v[0];
    int last=v[v.size()-1];
    if(k>=start && k<=last)
    {
      if(search(v,k))
      {
          
          return true;
      }
    }
    return false;
}

int main()
{
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    int n=mat.size();
    int m=mat[0].size();
    int target = 7;
    
    for(int i=0;i<n;i++)
    {
      
        
            if(range(mat[i],target))
            {
                cout<<"Target found at row "<<i+1;
                return 0;
            }
       
    }
         cout<<"Target not found";
                
    return 0;
}