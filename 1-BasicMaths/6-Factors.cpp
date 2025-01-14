#include<bits/stdc++.h>
using namespace std;

void facts(int n)
{
    vector <int> v;
  for(int i=1;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {
          v.push_back(i);
      }
      
      if(n%i==0 && (n/i)!=i)
      {
          v.push_back(n/i);
      }
  
      
  }
  
  sort(v.begin(),v.end());
  
  for(auto it:v)
  {
      cout<<it<<" ";
  }
}

int main()
{
    int n;
    cin>>n;
    
    facts(n);
    
    return 0;
}