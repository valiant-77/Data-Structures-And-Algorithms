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
        
       /* if(digit==0)
        {
            continue;
            

        }*/
    
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