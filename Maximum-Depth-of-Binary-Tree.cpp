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

//  can use depth search
// should follow a proper sequence of traversing
//  can use stack and left first approach

// 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;

        stack<pair<TreeNode*, int>> st;  // Stack to hold node and its depth
        st.push({root, 1});  // Start with depth 1
        int maxDepth = 0;

        while (!st.empty()) {
            auto [node, depth] = st.top();
            st.pop();

            maxDepth = max(maxDepth, depth);

            if (node->right) 
                st.push({node->right, depth + 1});
            if (node->left) 
                st.push({node->left, depth + 1});
        }

        return maxDepth;
    }
};
