#include<bits/stdc++.h>
using namespace std;

int func( int n ){
   int sum;
 
   if(n==0) 
   return 0;
   

  
  sum=n+ func(n-1);

   return sum;

}

int main(){
  
  
  int n;
  cin>>n;
  cout<<func(n);
  return 0;

}