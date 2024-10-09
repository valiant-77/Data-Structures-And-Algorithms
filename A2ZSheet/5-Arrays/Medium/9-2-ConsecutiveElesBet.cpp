#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>& a) {
    if (a.empty()) return 0;
    
    sort(a.begin(), a.end());
    
    int longest = 1;
    int current_length = 1;
    
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i - 1] + 1) {
            // If consecutive element is found
            current_length++;
        } else if (a[i] != a[i - 1]) {
            // Reset current length if it's not consecutive
            longest = max(longest, current_length);
            current_length = 1;
        }
    }
    
    // Final check for the last sequence
    longest = max(longest, current_length);
    
    return longest;
}

int main() {
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
