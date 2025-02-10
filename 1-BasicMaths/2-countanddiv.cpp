/* Logic:
1-extract every digit by doing n=n%10
2-check if n is divisble by digit(n%digit==0)
3-if n is divisble with every digit then return yes

TC=O(log10(n))
SC=O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int divis(int n)
{
    int count=0;
    int x=n;
    int digit;
    
    while(x>0)
    {
        digit=x%10;
        
        x=x/10;
        
        if(digit==0)
        {
            continue;
            

        }
    
        if(n%digit==0)
        {
            cout<<digit<<" "<<endl;
            count=count+1;
            
        }
        
        
    }
    
    
    
    return count;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<"digits divisible are "<<divis(n);
    
    return 0;
}