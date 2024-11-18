#include<bits/stdc++.h>
using namespace std;

  int mySqrt(int n)
{
    long long low=0;
    long long high=n;
    int ans;
    
    while(low<=high)
    {
        long long mid=(low+high)/2;
        
        if(mid*mid<=n)
        {
            ans=mid;
            low=mid+1;
        }
        
        else
       {
            high=mid-1;
        
       }
        
    }
    
    return ans;
}

int main()
{
    int n = 36;
   cout<<mySqrt(n);
    return 0;
}