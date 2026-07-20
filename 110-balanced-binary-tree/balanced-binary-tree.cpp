class Solution {
public:
    int f(TreeNode* root) {
        if (root == NULL)
            return 0;

        int l = f(root->left);
        int r = f(root->right);

        if (l == -1 || r == -1)
            return -1;

        if (abs(l - r) > 1)
            return -1;

        return 1 + max(l, r);
    }

    bool isBalanced(TreeNode* root) {
        return f(root) != -1;
    }
};