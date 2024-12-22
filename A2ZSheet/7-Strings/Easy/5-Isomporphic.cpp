#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {

        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(int i=0;i<=s.size()-1;i++)
        {
            if(mp1.find(s[i])==mp1.end())
            {
                mp1[s[i]]=i;
            }

            if(mp2.find(t[i])==mp2.end())
            {
                mp2[t[i]]=i;
            }

            if(mp1[s[i]]!=mp2[t[i]])
            {
               return false;
            }
        }
        return true;
    }

    int main()
{
    string s="add";
    string t="egg";
    
    cout<<isIsomorphic(s,t);
    
    return 0;
}