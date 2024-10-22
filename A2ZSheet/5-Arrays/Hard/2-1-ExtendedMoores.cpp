#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
    int m = n / 3;
    int num,count;
    
 vector<int>v;
    
    
    for (int i = 0; i < n; i++) {
        num = arr[i];
         count = 0; // Reset count for each new element
        
        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                count++;
                
            }
            
            
        }
       if (count > m && find(v.begin(),v.end(),num)==v.end()) {
         v.push_back(num);
        }    
    }
    
    
        
       
    
    
    for(auto it:v)
    {
        cout<<it<<" ";
    }
        
      
    
}
    
    
    
    
    
   


int main() {
    int myArray[] = {11,11,33,33,11,33};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    solve(myArray, size);

    return 0;
}
