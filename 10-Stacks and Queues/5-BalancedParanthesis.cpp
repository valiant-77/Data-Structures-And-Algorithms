#include<bits/stdc++.h>
using namespace std;

bool isMatching(char open,char close)
{
    if((open=='(' && close==')') ||
       (open == '[' && close == ']') ||
           (open == '{' && close == '}'))
           {
             return true;
           }

           return false;
}
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<=s.size()-1;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }

            else
            {
                if(st.empty()) return false;

                char ch=st.top();
                st.pop();
          
             ;
              
                if(!isMatching(ch,s[i]))
                {
                    return false;
                }

               
            }

            
        }

        return st.empty();
    }

    int main() {
    string str = "()[{}()]";
    
    
    bool ans =isValid(str);
    
    if(ans)
        cout << "The given string is valid.";
    else 
        cout << "The given string is invalid.";
    
    return 0;
}