#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<vector<int>>&arr)
{
    vector<int>res;
    int n=arr.size();
    int m=arr[0].size();
    
    int ans=-1;
    int maxi=0;
    
    for(int i=0;i<n;i++)
    {
       int count=0;
       
       for(int j=0;j<m;j++)
       {
           if(arr[i][j]==1)
           {
               count++;
           }
       }
       
       if(count>maxi)
       {
           maxi=count;
           ans=i;
       }
    }
    
    
    
    
 
  return res={ans,maxi};

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