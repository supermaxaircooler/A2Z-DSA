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
    bool recursive(TreeNode* pnode, TreeNode* qnode){


        if(!pnode && !qnode) return true;


        if(pnode && qnode){
            if(pnode->val != qnode->val) return false;
        }
        else return false;



        bool x = recursive(pnode->left , qnode->left);

        bool y = recursive(pnode->right, qnode->right);

        return x && y;

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        return recursive(p , q);
        
    }
};