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
    bool findTarget(TreeNode* root, int k) {

        vector<int> vec;

        stack<TreeNode*> st;

        st.push(root);
        TreeNode* temp = root;


        while(!st.empty()){

            while(temp->left){
                temp = temp->left;
                st.push(temp);
            }

            TreeNode* top = st.top();
            st.pop();
            vec.push_back(top->val);

            if(top->right){
                temp = top->right;
                st.push(temp);
            }
        }


        int start = 0;
        int end = vec.size()-1;

        while(start != end){

            if(vec[start] + vec[end] > k){
                end = end-1;
            }
            else if(vec[start] + vec[end] < k){
                start = start+1;

            }

            else {
                return true;
            }
        }


        return false;
        
    }
};