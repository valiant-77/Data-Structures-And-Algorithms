#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
      int n=nums2.size()-1;
        unordered_map<int,int>mp;
        stack<int>st;

        for(int i=n;i>=0;i--)
        {
            int cur=nums2[i];

            while(!st.empty() && st.top()<=cur)
            {
                st.pop();
            }


            if(st.empty()){
                mp[cur]=-1;
            }
            else{
                mp[cur]=st.top();
            }

            st.push(cur);
        }

        for(auto it:nums1)
        {
            ans.push_back(mp[it]);
        }



        return ans; 

    }




int main()
{
    vector<int>arr1={4,1,2};
    vector<int>arr2={1,3,4,2};

    vector<int>ans=nextGreaterElement(arr1,arr2);

    for(int x:ans)
    {
        cout<<x<<" ";
    }

    return 0;
}