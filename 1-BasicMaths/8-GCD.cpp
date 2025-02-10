/* Logic: Eucledian algo
1-Given two numbers a and b
2-go on taking mod of the greater number
  if a is greater then a=a%b or else b=b%a
3-do this till any of the one becomes 0 adn the non zero number is the gcd

TC=O(log n)
SC=O(1)
*/


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