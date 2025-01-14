#include<bits/stdc++.h>
using namespace std;

void reversee(vector<char>&arr)
{
    int n=arr.size();
    int start=0 , end=n-1;
    
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<char>v={'h', 'e', 'l', 'l', 'o'};
    
    reversee(v);
    
    for(auto it:v)
    {
        cout<<it;
    }
    return 0;
}