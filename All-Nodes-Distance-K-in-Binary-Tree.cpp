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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        unordered_map<TreeNode* , TreeNode*> umap;
        queue<TreeNode*> que;

        que.push(root);
        while(!que.empty()){
            auto top = que.front();
            que.pop();

            if(top->left){
                que.push(top->left);
                umap[top->left] = top;

            }
            if(top->right){
                que.push(top->right);
                umap[top->right]= top;
            }
        }

        unordered_set<TreeNode*> uset;

        uset.insert(target);

        queue<pair<TreeNode*, int>> distq;
        distq.push({target , 0});


        vector<int> sol;


        while(!distq.empty()){

            auto [node , d] = distq.front();
            distq.pop();

            if(d == k){
                sol.push_back(node->val);
            }

            if(node->left && uset.find(node->left) == uset.end()){
                uset.insert(node->left);
                distq.push({node->left , d+1});
            }
            if(node->right && uset.find(node->right) == uset.end()){
                uset.insert(node->right);
                distq.push({node->right , d+1});
            }
            if(umap.find(node)!= umap.end() && uset.find(umap[node]) == uset.end()){
                uset.insert(umap[node]);
                distq.push({umap[node] , d+1});
            }
        }
        

        
        return sol;
    }
};