/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (!root) return true;

        stack<TreeNode*> s;
        unordered_map<TreeNode*, int> height;
        TreeNode* lastVisited = nullptr;
        TreeNode* curr = root;
        
        while (!s.empty() || curr) {
            if (curr) {
                s.push(curr);
                curr = curr->left;  // Traverse left subtree
            } else {
                TreeNode* node = s.top();
                if (node->right && lastVisited != node->right) {
                    curr = node->right;  // Traverse right subtree
                } else {
                    s.pop();
                    int leftHeight = height[node->left];
                    int rightHeight = height[node->right];

                    if (abs(leftHeight - rightHeight) > 1) return false;
                    
                    height[node] = 1 + max(leftHeight, rightHeight);
                    lastVisited = node;
                }
            }
        }
        return true;
    }
};
