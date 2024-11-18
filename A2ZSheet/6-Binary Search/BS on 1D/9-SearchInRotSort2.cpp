#include <bits/stdc++.h>
using namespace std;

bool search(vector<int>& arr, int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) 
    {
        int mid = (low + high) / 2;

        //if mid points the target
        if (arr[mid] == k) return true;

        if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low = low + 1;
            high = high - 1;
            continue;
        }

        //if left part is sorted:
        if (arr[low] <= arr[mid]) 
        {
            if (k>=arr[low] && k <= arr[mid]) 
            {
                //element exists:
                high = mid - 1;
            }
                else 
               {
                //element does not exist:
                low = mid + 1;
               }
        }
        
        
        else 
        { //if right part is sorted:
            if (k>=arr[mid] && k <= arr[high]) 
            {
                //element exists:
                low = mid + 1;
            }
                 else 
                {
                //element does not exist:
                high = mid - 1;
                }
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int n=10;
    int k = 3;
    bool ans = search(arr,n, k);
    if (!ans)
        cout << "Target is not present.\n";
    else
        cout << "Target is present in the array.\n";
    return 0;
}

