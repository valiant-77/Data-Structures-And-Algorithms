#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    int n=s.size();
    int start=0 , end=n-1;
    
    while(start<=end)
    {
        while (start < end && !isalnum(s[start])) start++;
        while (start < end && !isalnum(s[end])) end--;
        
       if(tolower(s[start]) != tolower(s[end]))
       {
           return false;
       }
       
       start++;
       end--;
    }
    
    return true;
}

int main()
{
    string s="A man, a plan, a canal: Panama";
    
    cout<<palindrome(s);
    
    return 0;
}