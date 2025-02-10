/*Logic: For a given number just keep removing the last digits by doing n=n/10 till n=0 
  and then every time you remove the last digit just keep track of how many times the last digit is removed and that is the number of digits

  TC=O(log10(n))
  SC=O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int digits(int n)
{
    int count=0;
    
    
    while(n>0)
    {
        n=n/10;
        
        count=count+1;     
    }
    
    
    
    return count;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<digits(n);
    
    return 0;
}