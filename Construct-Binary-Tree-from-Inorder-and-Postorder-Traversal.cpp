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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        
        unordered_map<int , int> umap;


        for(int i = 0 ; i < inorder.size() ; i++){
            umap[inorder[i]] = i;
        }


        stack<pair<int , TreeNode* >> st;

        TreeNode* root = new TreeNode(postorder[postorder.size() -1]);

        
        st.push({umap[postorder[postorder.size() -1]] , root});


        for(int i = postorder.size()-2 ; i >= 0 ; i--){

            auto [index , node] = st.top();
            TreeNode* temp = new TreeNode(postorder[i]);

            if(umap[postorder[i]] > index){
                node->right = temp;
            }
            else{
                while(!st.empty() && st.top().first > umap[postorder[i]]){
                    node = st.top().second;
                    st.pop();
                }
                node->left = temp;
            }
            st.push({umap[postorder[i]] , temp});

        }

        return root;
        
    }
};