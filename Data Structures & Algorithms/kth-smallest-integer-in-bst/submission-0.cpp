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
vector<int> ans;
    void solve(TreeNode* root){
        if(root==nullptr) return;

        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        int n=ans.size();
        solve(root);

        return ans[k-1];
    }
};
