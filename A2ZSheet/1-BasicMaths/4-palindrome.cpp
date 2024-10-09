#include<bits/stdc++.h>
using namespace std;

string pali(int n)
{
    int rev=0;
    int digit;
    int x=n;
    
    
    while(x>0)
    {
        digit=x%10;

        rev=rev*10+digit;

       x=x/10;
        
             
    }

    if(n==rev)
    return "yes";

    else
    return "no";
    
    
    
    
}

int main()
{
    int n;
    cin>>n;
    
    cout<<pali(n);
    
    return 0;
}