/*
Logic:
1-Get the number n
2-keep calling f(n-1) till n becomes 0
3-when n becomes 0 the flow returns to its calling function  and resumes next steps
n=5
5-4-3-2-1-0 ->1 2 3 4 5


TC=O(n)
sc=o(n)

*/




#include<bits/stdc++.h>
using namespace std;

void func( int n ){
   
 
   if(n==0) 
   return;
   

  
   func(n-1);

   cout<<n<<" ";

}

int main(){
  
  
  int n;
  cin>>n;
  func(n);
  return 0;

}