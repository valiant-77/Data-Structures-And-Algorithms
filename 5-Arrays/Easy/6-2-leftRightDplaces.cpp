/*Left Rotate D places
void rotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // Adjust k if it's larger than n

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    // Step 1: Reverse the entire array
    reverse(arr.begin(), arr.end());
}




//Right rotate d places
#include <vector>
#include <algorithm>  // For reverse

using namespace std;

   void rotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // Adjust k if it's larger than n

    // Step 1: Reverse the entire array
    reverse(arr.begin(), arr.end());

    // Step 2: Reverse the first k elements
    reverse(arr.begin(), arr.begin() + k);

    // Step 3: Reverse the remaining elements
    reverse(arr.begin() + k, arr.end());
}
*/