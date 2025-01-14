#include<bits/stdc++.h>

using namespace std;

double myPow(double x, int n) {
  double ans = 1.0;
  long long nn = abs(n); // Use absolute value here
  while (nn>0) {
    if (nn % 2==1) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  if (n < 0) ans = 1.0 / ans; // Handle negative exponents
  return ans;
}

int main() {
  cout << myPow(2, -2) << endl; // Should output 0.25
  cout << myPow(2, 10) << endl; // Should output 1024
  return 0;
}