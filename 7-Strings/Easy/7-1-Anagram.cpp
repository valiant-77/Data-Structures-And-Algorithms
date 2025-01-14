#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2) {
        if (s1.size() != s2.size()) 
        return false;

    unordered_map<char, int> freq;

   
    for (int i = 0; i < s1.size(); i++) {
        freq[s1[i]]++;
    }

    
    for (int i = 0; i < s2.size(); i++) {
        if (freq[s2[i]] == 0) 
            return false;
        freq[s2[i]]--;
    }

    return true; 
    }

      int main()
{
    string s="cat";
    string t="act";
    
    cout<<isAnagram(s,t);
    
    return 0;
}