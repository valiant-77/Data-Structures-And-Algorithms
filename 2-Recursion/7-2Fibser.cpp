#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 0;
    int b = 1;
    int temp;
    
    

    
        for (int i = 0; i <=n; ++i)
        {
           cout<<a<<" ";
            temp = a + b;
            a = b;
            b = temp;
            
            
        }


        return 0;
    }