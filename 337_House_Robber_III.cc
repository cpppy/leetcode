/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,int> st;
    unordered_map<TreeNode*,int> nst;
    
    int rob(TreeNode* root) {
        if(root==NULL)  return 0;
        dfs(root);
        return max(st[root],nst[root]);
    }
    void dfs(TreeNode* root){
        if(root==NULL) return ;
        dfs(root->left);
        dfs(root->right);
        
        st[root]=root->val+nst[root->left]+nst[root->right];
        nst[root]=max(max(st[root->left]+st[root->right],st[root->left]+nst[root->right]),max(nst[root->left]+st[root->right],nst[root->left]+nst[root->right]));
        
    }
};
