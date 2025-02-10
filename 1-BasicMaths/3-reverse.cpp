/* Logic:
1-extract every digit by doing n=n%10
2-rev=rev*10+digit
3-remove last digit

TC=O(log10(n))
SC=O(1)
*/
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