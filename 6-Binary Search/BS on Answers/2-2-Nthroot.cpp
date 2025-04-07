#include <bits/stdc++.h>
using namespace std;


int product(int mid,int n)
{
  long long prod=1;
  
  for(int j=1;j<=n;j++)
  {
    prod=prod*mid;
  }
  
  return prod;
}


int NthRoot(int n,int m)
{
  int low=1;
  int high=m;
  
  while(low<=high)
  {
    int mid=(low+high)/2;

   int x= product(mid,n);
    
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
