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
    TreeNode* deleteNode(TreeNode* root, int key) {


        if(!root) return nullptr;

        bool direction = false;

        TreeNode* parent = nullptr;

        TreeNode* temp = root;

        while(temp){

            if(key > temp->val){
                parent = temp;
                temp = temp->right;
                direction = true;
            
            }

            else if(key < temp->val){
                parent = temp;
                temp = temp->left;
                direction = false;

            }
            else{
                break;
            }
        }

        if(temp == nullptr) return root;

        

        if(temp->left && temp->right) {

            TreeNode* leftchild = temp->left;
            temp = temp->right;

            if(parent == nullptr){
                root = temp;
            }
            else if(direction){
                parent->right = temp;
            }
            else parent->left = temp;


            while(temp->left){
                temp = temp->left;
            }
            temp->left = leftchild;

        }
        
        else if(temp->left){
            if(parent == nullptr) return temp->left;
            if(direction) parent->right = temp->left;
            else parent->left = temp->left;
        }

        else if(temp->right){
            if(parent == nullptr) return temp->right;
            if(direction) parent->right = temp->right;
            else parent->left = temp->right;
        }


        else{
            if(parent == nullptr) return nullptr;
            if(direction) parent->right = nullptr;
            else parent->left = nullptr;
        }



        return root;


        
    }
};