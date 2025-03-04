/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:


    bool recursive(TreeNode* root , TreeNode* p , TreeNode* q , TreeNode* & sol){

        if(!root) return false;



        // if(root == p) return true;

        // if(root == q) return true;


        bool ltemp = recursive(root->left , p , q , sol);

        // if(ltemp) return true;


        bool rtemp = recursive(root->right , p , q , sol);
        // if(rtemp) return true;


        if((root == p || root == q) && (rtemp || ltemp)) {
            sol = root;
        }
        if(ltemp && rtemp){
            sol = root;
        }

        if(root == p || root == q || ltemp || rtemp) return true;

        return false;
    }


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        TreeNode* sol = nullptr;

        recursive(root , p , q, sol);

        return sol;
    }
};