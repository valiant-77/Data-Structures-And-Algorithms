#include<bits/stdc++.h>
using namespace std;

void RearrangebySign(vector<int>& arr) {
    // Create vectors for storing positive and negative elements.
    vector<int> pos, neg;

    // Segregate the array into positives and negatives.
    for (int ele:arr) {
        if (ele >= 0) {
            pos.push_back(ele);
        } else {
            neg.push_back(ele);
        }
    }

    vector<int>temp;
    int i = 0, j = 0;

    // Place positive and negative numbers alternately.
    while (i < pos.size() && j < neg.size()) {
        temp.push_back(pos[i]);
        i++;

        temp.push_back(neg[j]);
        j++;


    }

    // If there are remaining positive numbers.
    while (i < pos.size()) {
      temp.push_back(pos[i]);
        i++;
    }

    // If there are remaining negative numbers.
    while (j < neg.size()) {
        temp.push_back(neg[j]);
        j++;
    }

    arr=temp;
}

int main() {
    vector<int> arr = {3, 1, -2, -5, 2, -4, 6};  // Example vector with unequal positives and negatives

    RearrangebySign(arr);
  
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
