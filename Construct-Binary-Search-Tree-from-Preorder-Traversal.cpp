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
    TreeNode* bstFromPreorder(vector<int>& preorder) {

        stack<TreeNode*> st;

        TreeNode* root = new TreeNode(preorder[0]);


        TreeNode* temp = root;




        for(int i = 1 ; i < preorder.size() ; i++){

            TreeNode* loda = new TreeNode(preorder[i]);

            if(preorder[i] < temp->val){
                temp->left = loda;
                st.push(temp);
                temp = loda;
            }

            else{

                while(!st.empty() && st.top()->val < preorder[i]){

                    temp = st.top();

                    st.pop();
                }
                temp->right = loda;
                // st.pop();
                temp = loda;
            }






        }


        return root;
        
    }
};