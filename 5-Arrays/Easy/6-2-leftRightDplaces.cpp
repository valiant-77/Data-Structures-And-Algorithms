//left roate d places
void leftRotate(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return; // Edge case: empty array

    k = k % n;  // Adjust k if it's larger than n
    if (k == 0) return; // No rotation needed

    // Step 1: Reverse the first k elements
    reverse(arr.begin(), arr.begin() + k);

    // Step 2: Reverse the remaining (n-k) elements
    reverse(arr.begin() + k, arr.end());

    // Step 3: Reverse the entire array
    reverse(arr.begin(), arr.end());
}





//Right rotate d places
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
