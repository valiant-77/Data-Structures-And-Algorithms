#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 0;
    int b = 1;
    int temp;
    
    

    
        for (int i = 2; i <=n; ++i)
        {
           
            temp = a + b;
            a = b;
            b = temp;
            
            
        }

cout<<temp;
        return 0;
    }