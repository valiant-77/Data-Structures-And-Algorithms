#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n)
{
    int maxi=0;
    int profit=0;
    
    for(int i=0;i<n;i++)
    {
        int cp=arr[i];
        
        for(int j=i;j<n;j++)
        {
            profit=arr[j]-cp;
            maxi=max(maxi,profit);
        }
    }
    
    return maxi;
}

int main() {
    int arr[] = {7,1 ,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout <<solve(arr,n);
    return 0;
}
