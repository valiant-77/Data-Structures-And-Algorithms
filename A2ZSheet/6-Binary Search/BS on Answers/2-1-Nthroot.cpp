#include <bits/stdc++.h>
using namespace std;

int power(int k,int l)
{
  long long prod=1;
  
  for(int j=1;j<=l;j++)
  {
    prod=prod*k;
  }
  
  return prod;
}


int Nroot(int n, int m) {


    for (int i = 1; i <= m; i++) 
    {
      
      long long x=power(i,n);
      
      
        
        
        if (x == m) {
            return i;  // Found the nth root
        }
        
        if (x > m) {
            break;  // No need to continue if x exceeds m
        }
    }
    
    return -1;  // If no integer root found
}

int main() {
    int n = 3;
    int m = 27;
    
    cout << Nroot(n, m);
    
    return 0;
}
