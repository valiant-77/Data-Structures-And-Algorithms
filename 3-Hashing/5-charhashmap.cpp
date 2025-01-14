#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
     cout<<"Enter the string: ";
    cin>>s;
    
   
    
   
    
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }

        
    
    
    
    
    int q;
    cout<<"Enter the number of chars to be searched: ";
    cin>>q;
    
    while(q--)
    {
        char c;
        cout<<"Enter the character to be searched: ";
        cin>>c;
        
        cout<<"The occurence of "<<c<<" is "<<mp[c]<<" times"<<endl;
    }

    return 0;
}