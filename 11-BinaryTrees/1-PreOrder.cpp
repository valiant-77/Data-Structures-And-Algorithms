
#include <bits/stdc++.h>
using namespace std;


struct TreeNode 
{
    int data;
    TreeNode* left;
    TreeNode* right;

  
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    
    void func(TreeNode* node, vector<int>& ans) {
        
        if (node == nullptr) {
            return;
        }

       
        ans.push_back(node->data);
        
        func(node->left, ans);
        
        func(node->right, ans);
    }

    
    vector<int> preorder(TreeNode* root) {
        
        vector<int> ans;
      
        func(root, ans);
        
        return ans;
    }
};


int main() {
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    
    Solution solution;
    
    vector<int> result = solution.preorder(root);

    
    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
