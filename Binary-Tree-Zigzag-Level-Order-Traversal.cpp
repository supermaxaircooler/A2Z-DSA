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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {


        if(!root){
            return {};
        }


        vector<vector<int>> sol;

        vector<vector<TreeNode*>> nodes; 

        nodes.push_back({root});

        TreeNode* temp = root;
        int levels = 0;


        while(!nodes.back().empty()){

            vector<int> temp;
            vector<TreeNode*> nodetemp;

            for(auto i : nodes.back()){
                temp.push_back(i->val);
                if(i->left) nodetemp.push_back(i->left);
                if(i->right) nodetemp.push_back(i->right);
            }
            if(levels %2 == 1){
                reverse(temp.begin() , temp.end());
            }

            sol.push_back(temp);
            nodes.push_back(nodetemp);
            levels++;

        }


        return sol;



        
    }
};