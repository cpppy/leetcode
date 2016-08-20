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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root=NULL;
        if(nums.size()==0) return root;
        int n=nums.size();
        buildTree(root,0,n-1,nums);
        return root;
        
        
    }
    void buildTree(TreeNode* &root,int left,int right,vector<int> &nums){
        if(left>right) return;
        int mid=(right+left+1)/2;
        root = new TreeNode(nums[mid]);
        buildTree(root->left,left,mid-1,nums);
        buildTree(root->right,mid+1,right,nums);
        
    }
};
