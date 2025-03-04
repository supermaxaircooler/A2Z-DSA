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


/*
1. Nodes should be leaves nodes
2. Methodology - {


    1. consider any 2 leaves node
    2. when we try to traverse up from these leaves node there should be a common node where they meet
    3. that common node is supposed our new root node
    4. what we have to do is find the max depth of left and right subtree and look for max summation of both depths
    5. so this should have high time complexity
}



*/
class Solution {
public:
int res=0;
int value(TreeNode* root)
{
    if(root==NULL) return 0;

    int left=value(root->left);
    int right=value(root->right);
    res=max(res,left+right);
    return 1+max(left,right);

}
    int diameterOfBinaryTree(TreeNode* root) {
        int data= value(root);
        return res;
    }
};