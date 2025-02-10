/* Logic:
1-for the given number n run a loop from 1-n checking if every number is a factor of n which would take O(n) time

so instead print both factors at once till both factors are same
ex:n=36
1x36=36 print both 1 and 36
2x18=36 print both 2 and 18
6x6=36 print one of these and stop

if(n%i=0)
if(n/i!=i)

TC=O(sqrt(n))
SC=O(sqrt(n))
*/

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