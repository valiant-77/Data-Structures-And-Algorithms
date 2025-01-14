//TC=O(q*n)
//SC=O(n)

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
  
  int num;
  cout<<"Enter the number of numbers to be searched: ";
  cin>>num;
  
  while(num--)
  {
      int q;
      cout<<"Enter the number to be searched: ";
      cin>>q;
      
      int count=0;
    
     for(int i=0;i<n;i++)
     {
         if(arr[i]==q)
        {
         count++;
        }          
     }
  cout<<"The occurence of "<<q<<" is "<<count<<" times"<<endl;
  }
  
  
  
    return 0;
}
