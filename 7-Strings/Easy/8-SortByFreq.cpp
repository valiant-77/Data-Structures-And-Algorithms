#include<bits/stdc++.h>
using namespace std;

void pushh(int n, char m, vector<char>& charr) {
    for (int i = 0; i < n; i++) {
        charr.push_back(m);
    }
}

string frequencySort(string& s) {
    unordered_map<char, int> mp;
    vector<char> v;

    // Count character frequencies
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

    // Determine maximum frequency
    int maxFreq = 0;
    for (auto it : mp) {
        maxFreq = max(maxFreq, it.second);
    }

    // Iterate over possible frequencies from maxFreq down to 1
    for (int j = maxFreq; j >= 1; j--) {
        for (auto it : mp) {
            if (it.second == j) {
                pushh(it.second, it.first, v);
            }
        }
    }

    return string(v.begin(), v.end());
}
		

int main()
{
    string s="eeeee";
    
   cout<<frequencySort(s);
    
   
    
    return 0;
}