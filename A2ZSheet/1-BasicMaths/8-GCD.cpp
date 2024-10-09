#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        a=a%b;
        
        else
        b=b%a;
    }
    
    if(a==0)
    return b;
    
    else 
    return a;
  
  
  
}

int main()
{
    int n,x;
    cin>>n>>x;
    
   cout<<gcd(n,x);
    
    return 0;
}