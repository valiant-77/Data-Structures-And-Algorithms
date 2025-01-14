 #include<bits/stdc++.h>
using namespace std;
 
 bool rotateString(string s, string goal) {
 if (s.length() != goal.length()) {
        return false;
        }
       string mergedstr=s+s;

       if(mergedstr.find(goal)!=string::npos)
       {
        return true;
       }

       return false;
    }

int main()
{
    string s="abcde";
    string t="cdeab";
    
    cout<<rotateString(s,t);
    
    return 0;
}