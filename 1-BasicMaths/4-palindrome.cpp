/* Logic:
1-extract every digit by doing n=n%10
2-rev=rev*10+digit
3-remove last digit
4-check if reverse == original

TC=O(log10(n))
SC=O(1)
*/



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