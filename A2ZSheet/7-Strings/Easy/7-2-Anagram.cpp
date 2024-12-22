#include<bits/stdc++.h>
using namespace std;


bool isAnagram(string s1, string s2) {
       sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    if(s1==s2)
    {
        return true;
    }
    
    return false; 
    }

int main()
{
    string s="cat";
    string t="act";
    
    cout<<isAnagram(s,t);
    
    return 0;
}