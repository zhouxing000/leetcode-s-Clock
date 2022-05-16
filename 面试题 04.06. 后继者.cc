
class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
         if (root == nullptr) {
            return nullptr;
        }

        TreeNode *q=root;
        TreeNode  *ans = nullptr;
        while (q!= nullptr) {
            if (p->val < q->val) {
                ans = q;
                q = q->left;
            } else {
                q = q->right;
            }
        }
        return ans;

    }
};
