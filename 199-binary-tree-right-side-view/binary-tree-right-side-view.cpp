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
int level=0;
vector<int>val;
void solve(TreeNode* root){
    if(root==NULL) return ;
    if(level==val.size()) val.push_back(root->val);
    level++;
    solve(root->right);
    solve(root->left);
    level--;
}
    vector<int> rightSideView(TreeNode* root) {
        solve(root);
        return val;
        
    }
};