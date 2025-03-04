/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

vector<string> parseSpecialString(const string &s) {
    vector<string> values;
    string current;
    
    for (char ch : s) {
        if (ch == ',') {
            values.push_back(current);
            current.clear();
        } else {
            current += ch;
        }
    }
    
    return values;
}

// Encodes a tree to a single string.
string serialize(TreeNode* root) {
    if (!root) return \,\;  // Handle empty tree

    string sol;
    queue<TreeNode*> que;
    que.push(root);

    while (!que.empty()) {
        TreeNode* top = que.front();
        que.pop();

        if (!top) {
            sol += \null,\;
            continue;
        }

        sol += to_string(top->val) + \,\; // Node value followed by ','
        que.push(top->left);
        que.push(top->right);
    }

    return sol;
}

// Decodes your encoded data to tree.
TreeNode* deserialize(string data) {
    if (data == \,\) return nullptr; // Handle empty tree

    vector<string> str = parseSpecialString(data);
    if (str.empty() || str[0] == \null\) return nullptr; // Edge case handling

    queue<TreeNode*> que;
    TreeNode* root = new TreeNode(stoi(str[0]));
    que.push(root);

    size_t i = 1; // Start from index 1
    while (!que.empty() && i < str.size()) {
        TreeNode* top = que.front();
        que.pop();

        // Assign left child
        if (i < str.size() && str[i] != \null\) {
            top->left = new TreeNode(stoi(str[i]));
            que.push(top->left);
        }
        i++;  // Move to next element

        // Assign right child
        if (i < str.size() && str[i] != \null\) {
            top->right = new TreeNode(stoi(str[i]));
            que.push(top->right);
        }
        i++;  // Move to next element
    }

    return root;
}


};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));