//TC= O(n)
//SC=O(1)

#include <bits/stdc++.h>
using namespace std;
int missingn(int arr[],int n)
{   

int s1=(n * (n + 1)) / 2;
int s2=0;

for(int i=0;i<n-1;i++)
{
    s2=s2+arr[i];

}
return s1-s2;
}


int main(){
    int n;
    cin>>n;
    int arr[n];



    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }

   

    cout<<missingn(arr,n);

   

    return 0;
}