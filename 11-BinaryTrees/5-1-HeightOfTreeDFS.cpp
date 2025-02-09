#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if (root == NULL) {
            return 0;
        }
   
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        
        return 1 + max(left, right);
    }
};

// Main method to test the function
int main() {
    Solution solution;
    // Example usage:
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    cout << "Maximum Depth: " << solution.maxDepth(root) << endl;
    return 0;
}
