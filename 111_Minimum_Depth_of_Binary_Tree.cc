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
    int minDepth(TreeNode* root) {
        if(root==NULL)  return 0;
        else{
            int curDep=0;
            return depth(root,curDep);
        }
    }
    int depth(TreeNode* root,int curDep){
        if(root==NULL)  return curDep;
        else if(root->left && !root->right) return depth(root->left,curDep+1);
        else if(!root->left && root->right) return depth(root->right,curDep+1);
        else return min(depth(root->left,curDep+1),depth(root->right,curDep+1));
    }
};
