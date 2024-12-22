#include<bits/stdc++.h>
using namespace std;

string longestprefix(vector<string>s)
{
    int n=s.size();
    sort(s.begin(),s.end());
    
    string ans="";
    
    string first=s[0] , last=s[n-1];
    int m=min(first.size(),last.size());
    for(int i=0;i<m;i++)
    {
        if(first[i]!=last[i])
        {
            break;
        }
        
        ans=ans+first[i];
    }
    
    return ans;
}



int main()
{
    vector<string>s={"flowers" , "flow" , "fly", "flight"} ;
    
    cout<<longestprefix(s);
    
    return 0;
}