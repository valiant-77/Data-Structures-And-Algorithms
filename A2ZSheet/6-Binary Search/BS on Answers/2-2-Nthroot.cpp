#include <bits/stdc++.h>
using namespace std;


int NthRoot(int n,int m)
{
  int low=1;
  int high=m;
  
  while(low<=high)
  {
    int mid=(low+high)/2;
    long long x=1;
    for(int i=1;i<=n;i++)
    {
      x=x*mid;
      if(x>m) break;
      
    }
    
    if(x==m)
    {
      return mid;
    }
    
    else if(x>m)
    {
      high=mid-1;
    }
    
    else
    {
      low=mid+1;
    }
  }
  
  return -1;
}


int main() {
    int n = 3;
    int m = 27;
    
    cout << NthRoot(n, m);
    
    return 0;
}