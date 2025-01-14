#include<bits/stdc++.h>
using namespace std;

  int mySqrt(int n)
{
    int ans;
    
    for(int i=0;i<=n;i++)
    {
        if(i*i<=n)
        {
            ans=i;
        }
        
        else
        {
            break;
        }
    }
    
    return ans;
}

int main()
{
    int n = 28;
   cout<<mySqrt(n);
    return 0;
}