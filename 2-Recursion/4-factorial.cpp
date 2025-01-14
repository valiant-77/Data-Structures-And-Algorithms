/*ex:n=5
f(5) from main
5 X f(4)
4 X f(3)
3 X f(2)
2 X f(1) ---> now f(1) returns 1
----------------------------------------
2 X 1[f(1)]=2 ---> now f(2) returns 2
3 X 2[f(2)]=6 ---> now f(3) returns 6
4 x 6=24
5 x 24= 120*/


#include<bits/stdc++.h>
using namespace std;

int factorial( int n ){
   int fact;

   if(n==1)
   return 1;
 
   if(n==0) 
   return 0;
   

  
  fact=n* factorial(n-1);

   return fact;

}

int main(){
  
  
  int n;
  cin>>n;
  cout<<factorial(n);
  return 0;

}