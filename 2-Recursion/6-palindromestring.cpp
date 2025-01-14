//O(n/2)

#include<bits/stdc++.h>

using namespace std;

bool pali(string s,int i)
{
    if(i>=s.size()/2)
    {
        return true;
    }

    if(s[i]!=s[s.size()-i-1])
    {
        return false;
    }
   
   pali(s,i+1);
}

int main()
{
    string s;
    cin>>s;

    bool ispalindrome=pali(s,0);

    if(ispalindrome)
    {
        cout<<"The entered string is a palindrome";
    }
    else
    cout<<"The entered string is a not palindrome";

    return 0;
}