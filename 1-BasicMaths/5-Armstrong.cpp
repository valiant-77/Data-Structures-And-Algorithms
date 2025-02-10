/* Logic:
1-get digit count
2-extract every digit by doing n=n%10
3-for every digit do sum=sum+pow(digit raised to count)
4-if sum = orignal number then its armstrong

TC=O(log10(n))
SC=O(1)
*/



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