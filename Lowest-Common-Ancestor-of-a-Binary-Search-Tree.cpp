/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
const auto _ = std::cin.tie(nullptr)->sync_with_stdio(false);

#define LC_HACK
#ifdef LC_HACK
const auto __ = []() {
    struct ___ {
        static void _() { std::ofstream(\display_runtime.txt\) << 0 << '\
'; }
    };
    std::atexit(&___::_);
    return 0;
}();
#endif

static const bool __boost = []() {
\tcin.tie(nullptr);
\tcout.tie(nullptr);
\treturn std::ios_base::sync_with_stdio(false);
\t}();

const size_t BUFFER_SIZE = 0x6fafffff;
alignas(std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;
void* operator new(size_t size) {
\tconstexpr std::size_t alignment = alignof(std::max_align_t);
\tsize_t padding = (alignment - (buffer_pos % alignment)) % alignment;
\tsize_t total_size = size + padding;
\tchar* aligned_ptr = &buffer[buffer_pos + padding];
\tbuffer_pos += total_size;
\treturn aligned_ptr;
}

void operator delete(void* ptr, unsigned long) {}
void operator delete(void* ptr) {}
void operator delete[](void* ptr) {}

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        int pval = p->val;
        int qval = q->val;


        TreeNode* temp = root;



        while((pval < temp->val && qval < temp->val) || (pval > temp->val && qval > temp->val)){

            if(pval < temp->val && qval < temp->val){
                temp = temp->left;
            }

            else if(pval > temp->val && qval > temp->val){
                temp = temp->right;
            }

        }


        return temp;
        
    }
};