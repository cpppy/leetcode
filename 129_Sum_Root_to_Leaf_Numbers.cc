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
    int sumNumbers(TreeNode* root) {
        if(root==NULL) return 0;
        int sum=0;
        dtleaf(root,0);
        for(int i=0;i<res.size();++i){
            sum+=res[i];
        }
        return sum;
    }
    void dtleaf(TreeNode *root,int num){
        if(root->left==NULL && root->right==NULL){
            res.push_back(num*10+root->val);
        }
        if(root->left) dtleaf(root->left,num*10+(root->val));
        if(root->right) dtleaf(root->right,num*10+(root->val));
    }
    
private:
    vector<int> res;
};
