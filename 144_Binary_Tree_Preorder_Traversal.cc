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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL)  return res;
        res.push_back(root->val);
        nodetonode(root,res);
        return res;
    }
    void nodetonode(TreeNode* root,vector<int>& res){
        if(root->left==NULL&&root->right==NULL)  return;
        if(root->left){
            res.push_back(root->left->val);
            nodetonode(root->left,res);
        }
        if(root->right){
            res.push_back(root->right->val);
            nodetonode(root->right,res);
        }
         
    }

};
