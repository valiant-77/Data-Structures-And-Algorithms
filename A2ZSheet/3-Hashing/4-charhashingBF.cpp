#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter a string: ";
   string s;
   cin>>s;
   
   cout<<"enter number of queries: ";
   int q;
   cin>>q;
   
   while(q--)
   {
       char c;
       int count=0;
       
       cout<<"enter a query: ";
       cin>>c;
       
       for(int i=0;i<s.size();i++)
       {
           if(s[i]==c)
           {
               count++;
           }
           
       }
       
       cout<<"occurence of "<<c<<" is "<<count<<" times"<<endl;
   }
   
   return 0;
}