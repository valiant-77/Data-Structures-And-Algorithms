#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n) {
    int m = n / 2;
    
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int count = 0; // Reset count for each new element
        
        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                count++;
            }
        }
        
        if (count > m) {
            return num; // Return the majority element
        }
    }
    
    return -1; // Return -1 if no majority element is found
}

int main() {
    int myArray[] = {3, 2, 3};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    cout << solve(myArray, size) << endl;

    return 0;
}
