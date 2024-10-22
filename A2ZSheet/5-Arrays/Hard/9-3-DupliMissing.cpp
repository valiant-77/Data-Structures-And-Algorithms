#include<bits/stdc++.h>
using namespace std;
 
 
  void findTwoElement(int arr[],int n) {
        
        int dupli;
        int missing;
        int i;
        
        for (i = 0; i < n; i++) {
            if (arr[abs(arr[i]) - 1] > 0)
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            else
               dupli= abs(arr[i]);
        }

        for (i = 0; i < n; i++) {
            if (arr[i] > 0)
              missing = i + 1;
        }

       cout<<dupli<<","<<missing; 
    }


    int main()
{
    int arr1[]={3,1,2,5,3};
    int n= sizeof(arr1) / sizeof(arr1[0]);
    
    
    
    findTwoElement(arr1,n);
    
    return 0;
}