#include<bits/stdc++.h>

using namespace std;

double myPow(double x, int n) {
 if(n==0) return 1;
 
 if(n%2==1)
 {
  return x*myPow(x,n-1);
 }

 return myPow(x*x,n/2);
}

int main() {
  cout << myPow(2, -2) << endl; // Should output 0.25
  cout << myPow(2, 10) << endl; // Should output 1024
  return 0;
}