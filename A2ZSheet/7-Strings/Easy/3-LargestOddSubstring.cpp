#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string s) {
         
    int n=s.size();
    
    int i=0 , j=n-1;
    int lastodd=-1, firstnum=-1;
    
    for (int j = n - 1; j >= 0; j--) {
        if ((s[j] - '0') % 2 != 0) {
            lastodd = j;
            break;
        }
    }
    
    
    
    for (int i = 0; i < n; i++) {
        if (s[i] != '0') {
            firstnum = i;
            break;
        }
    }
    
     if (firstnum == -1 || lastodd == -1 || firstnum > lastodd) {
        return ""; 
    }
    
    
   return s.substr(firstnum,lastodd-firstnum+1);   
}


int main()
{
    string s="002031438";
    
    cout<<largestOddNumber(s);
    
    return 0;
}