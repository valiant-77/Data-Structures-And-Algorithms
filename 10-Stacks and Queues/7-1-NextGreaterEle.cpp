#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> arr) {
         int n=arr.size();
        stack<int>st;
         vector<int>ans(n);

         for(int i=n-1;i>=0;i--)
         {
            
            int cur=arr[i];

            while(!st.empty() && st.top()<=cur )
            {
                st.pop();
            }

            
                if(st.empty())
                {
                    ans[i]=-1;
                }

                else{
                    ans[i]=st.top();
                }
            

            st.push(cur);
         }

         

         return ans;
        
    }




int main()
{
    
    vector<int>arr2={1,3,4,2};

    vector<int>ans=nextGreaterElement(arr2);

    for(int x:ans)
    {
        cout<<x<<" ";
    }

    return 0;
}