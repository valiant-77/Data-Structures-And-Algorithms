#include<bits/stdc++.h>
using namespace std;

int first(vector<int>&arr,int n,int x)
{
int low= 0;
int high = n-1;

int first=-1;

while (low <=high)
{

int mid = (low + high)/2;

if (arr[mid] == x)
{
first = mid;

high = mid-1;

}

else if (arr[mid]>x)

{

high=mid-1;
}
else
{

 low = mid+1;
}
}

return first;
}



int last(vector<int>&arr,int n,int x)
{
int low= 0;
int high = n-1;

int last=-1;

while (low <=high)
{

int mid = (low + high)/2;

if (arr[mid] == x)
{
last = mid;

low = mid+1;

}

else if (arr[mid]>x)

{

high = mid-1;
}
else
{

 low= mid+1;
}
}

return last;
}



int main() {
  int n = 7;
  int key = 13;
  vector < int > v = {3,4,13,13,13,20,40};
  
  int f=first(v,n,key);
  int l=last(v,n,key);
 
 cout<<f<<" "<<l;
 

  return 0;
}