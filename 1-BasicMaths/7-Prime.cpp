/* Logic:
1-run a loop from 2 to less than n
2-if any of the i is divisble by n then its not prime
3-else if only 1 and the n are factors then prime

TC=O(n)
SC=O(1)
*/



#include<bits/stdc++.h>
using namespace std;

string prime(int n)
{
    
  for(int i=2;i<n;i++)
  {
      
      if(n%i==0)
      {
        return "not prime";
      }

  }

  return "prime";
}

int main()
{
    int n;
    cin>>n;
    
   cout<< prime(n);
    
    return 0;
}
