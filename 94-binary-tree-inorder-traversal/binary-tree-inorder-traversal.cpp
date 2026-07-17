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
vector<int> final;
void inn(TreeNode* root){
    if(root==NULL)
    return ;
    
    inn(root->left);
    final.push_back(root->val);
    inn(root->right);
}
    vector<int> inorderTraversal(TreeNode* root) {
        inn(root);
        return final;
        
    }
};