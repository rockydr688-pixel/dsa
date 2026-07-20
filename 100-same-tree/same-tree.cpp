class Solution {
public:
    bool f(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;

        if (p == NULL || q == NULL)
            return false;

        return (p->val == q->val) &&
               f(p->left, q->left) &&
               f(p->right, q->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return f(p, q);
    }
};