#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int> arr) {
         int n=arr.size();
        stack<int>st;
         vector<int>ans(n);

         for(int i=2*n-1;i>=0;i--)
         {
            int ind=i%n;
            int cur=arr[ind];

            while(!st.empty() && st.top()<=cur )
            {
                st.pop();
            }

            if(i<n)
            {
                if(st.empty())
                {
                    ans[i]=-1;
                }

                else{
                    ans[i]=st.top();
                }
            }

            st.push(cur);
         }

         

         return ans;
        
    }




int main()
{
    vector<int>arr={1,3,4,2};

    vector<int>ans=nextGreaterElements(arr);

    for(int x:ans)
    {
        cout<<x<<" ";
    }

    return 0;
}