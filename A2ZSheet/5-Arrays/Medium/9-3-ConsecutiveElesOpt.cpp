#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>& a) {
    if (a.empty()) return 0;
    
    unordered_set<int> s(a.begin(), a.end());
    int longest = 0;
    
    for (int num : a) {
        if (s.find(num - 1) == s.end()) { // Check if it's the start of a sequence
            int current_num = num;
            int current_length = 1;
            
            while (s.find(current_num + 1) != s.end()) {
                current_num++;
                current_length++;
            }
            
            longest = max(longest, current_length);
        }
    }
    
    return longest;
}

int main() {
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
