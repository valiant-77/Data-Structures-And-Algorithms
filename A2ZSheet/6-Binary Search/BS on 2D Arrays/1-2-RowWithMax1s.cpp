#include<bits/stdc++.h>
using namespace std;

int count(vector<int>&v)
{
    sort(v.begin(),v.end());
    int n=v.size();
    int low=0;
    int high=n-1;
    int ans=n;
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(v[mid]==1)
        {
            ans=mid;
            high=mid-1;
        }
        
        
        else{
            low=mid+1;
        }
    }
    
    int cnt=n-ans;
    
    return cnt;
}

vector<int>solve(vector<vector<int>>&arr)
{
    int n=arr.size();
    vector<int>maxo;
    if (n == 0) return {-1, 0};
    
    int maxi=0;
    int ans=-1;
 
    
    for(int i=0;i<n;i++)
    {
      int  x=count(arr[i]);
    
               if(x>maxi)
               {
                maxi=x;
                ans=i;
               }
    }
    
    
    maxo={ans,maxi};
    return maxo;

    
}


int main()
{
   vector<vector<int>>v={{0,1,1},{1,1,1},{0,0,0}};
   vector<int>res= solve(v);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
   
   return 0;
}