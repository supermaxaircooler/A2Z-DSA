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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        unordered_map<int , int> umap;


        for(int i = 0 ; i < inorder.size() ; i++){
            umap[inorder[i]] = i;
        }


        stack<pair<int , TreeNode* >> st;

        TreeNode* root = new TreeNode(preorder[0]);

        st.push({umap[preorder[0]] , root});

        for(int i = 1 ; i < preorder.size() ; i++){


            auto [index , node] = st.top();
            TreeNode* temp = new TreeNode(preorder[i]);

            if(umap[preorder[i]] < index){
                node->left = temp;
            }
            else{
                while(!st.empty() && st.top().first < umap[preorder[i]]){
                    node = st.top().second;
                    st.pop();
                }
                node->right = temp;
            }
            st.push({umap[preorder[i]] , temp});

        }

        return root;
        
    }


};