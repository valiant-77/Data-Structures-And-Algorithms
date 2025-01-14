#include<bits/stdc++.h>
using namespace std;

int rev(int n)
{
    int rev=0;
    int digit;
    
    
    while(n>0)
    {
        digit=n%10;

        rev=rev*10+digit;

       n=n/10;
        
             
    }
    
    
    
    return rev;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<rev(n);
    
    return 0;
}