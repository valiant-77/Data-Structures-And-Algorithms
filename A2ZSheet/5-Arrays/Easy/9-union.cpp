//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>
using namespace std;
void unioun(int arr1[],int arr2[],int n,int m)
{   

unordered_set<int>st;
for(int i=0;i<n;i++)
{
    st.insert(arr1[i]);
}


for(int i=0;i<m;i++)
{
    st.insert(arr2[i]);
}

for(auto it:st)
{
    cout<<it;
}
}


int main(){
    int n;
    cin>>n;
    int arr1[n];



    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }


 int m;
    cin>>m;
    int arr2[m];



    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

   

    unioun(arr1,arr2,n,m);

   

    return 0;
}