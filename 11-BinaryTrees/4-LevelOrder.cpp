#include <iostream>
#include <vector>
#include <queue> 

using namespace std;

struct TreeNode {
    int val; 
    TreeNode* left; 
    TreeNode* right;

    TreeNode() {
        val = 0;
        left = nullptr;
        right = nullptr;
    } 

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    } 
};

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans; 
    if (root == nullptr) {
        return ans; 
    }
    
    queue<TreeNode*> q; 
    q.push(root); 

    while (!q.empty()) {
        int size = q.size(); 
        vector<int> level; 

        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front(); 
            q.pop(); 
            level.push_back(node->val); 

            if (node->left != nullptr) {
                q.push(node->left);
            }
            if (node->right != nullptr) {
                q.push(node->right);
            }
        }
        ans.push_back(level); 
    }
    return ans; 
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<vector<int>> result = levelOrder(root); 

    // Print directly in main()
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl; // New line for each level
    }

    return 0;
}
