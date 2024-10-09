#include<bits/stdc++.h>
using namespace std;

string armstrong(int n)
{
    int count=0;
    int digits;
    int sum=0;
    int x=n;
    int k=n;
    
    
    while(x>0)
    {
       
        
        count=count+1;
         x=x/10;

    }

    while(k>0)
    {
        digits=k%10;
        sum=sum+pow(digits,count);
        k=k/10;
    }
    
    
    
    if(sum==n)
    return "yes";

    else
    return "no";
}

int main()
{
    int n;
    cin>>n;
    
    cout<<armstrong(n);
    
    return 0;
}