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
bool check(TreeNode* right,TreeNode* left){
    
    if(right==NULL  || left==NULL)
    return right==left;
    if(left->val!=right->val)
    return false;
    return check(right->right,left->left) && check(right->left,left->right);

}
    bool isSymmetric(TreeNode* root) {
       return check(root->right,root->left);
        
    }
};