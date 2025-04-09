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
    bool isValidBST(TreeNode* root) {

        if(!root) return true;



        int prev = 0;

        bool contain = false;
        TreeNode* temp = root;

        stack<TreeNode*> st;

        st.push(root);

        while(!st.empty()){


            TreeNode* top = st.top();

            if(temp->left){
                temp = temp->left;
                st.push(temp);
            }

            else{
                st.pop();

                if(!contain){ 
                    prev = top->val;
                    contain = true;
                }
                else{
                    if(top->val <= prev) return false;
                    prev = top->val;
                }
                if(top->right){
                    st.push(top->right);
                    temp = top->right;
                }
            }



        }


        return true;


        
    }
};