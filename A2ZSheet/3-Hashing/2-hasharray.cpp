#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the arrray: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter the array elements: ";
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int hash[13]={0};
    
        for(int i=0;i<n;i++)
        {
          hash[arr[i]]++;  
        }
    
    
    
    int q;
    cout<<"Enter the number of numbers to be searched: ";
    cin>>q;
    
    while(q--)
    {
        int num;
        cout<<"Enter the number to be searched: ";
        cin>>num;
        
        cout<<"The occurence of "<<num<<" is "<<hash[num]<<" times"<<endl;
    }

    return 0;
}