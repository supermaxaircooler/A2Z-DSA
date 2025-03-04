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


int recursive(TreeNode* root){

    if(!root) return 0;


    int left = 0;
    int right = 0;

    TreeNode* temp = root;

    while(temp){
        temp = temp->left;
        left++;
    }

    TreeNode* rtemp =root;

    while(rtemp){
        rtemp = rtemp->right;
        right++;
    }


    if(left != right) return 1 + recursive(root->left) + recursive(root->right);


    return (1 << left) - 1;
}



    int countNodes(TreeNode* root) {


        return recursive(root);
        
    }
};