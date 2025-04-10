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
class BSTIterator {

private : 
    stack<TreeNode*> st;
    TreeNode* temp;
public:
    BSTIterator(TreeNode* root) {

        this->st.push(root);
        this->temp = root;
    }
    
    int next() {

        while(this->temp->left){
            st.push(this->temp->left);
            this->temp = this->temp->left;
        }

        TreeNode* top = this->st.top();

        this->st.pop();

        if(top->right){
            this->st.push(top->right);
            this->temp = top->right;
        }

        // this->temp = top->right;



        return top->val;


        
    }
    
    bool hasNext() {
        return !st.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */