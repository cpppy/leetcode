/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> nums;
        ListNode* p=head;
        while(p!=NULL){
            nums.push_back(p->val);
            p=p->next;
        }
        TreeNode* root=NULL;
        if(nums.size()==0) return root;
        int n=nums.size();
        buildTree(root,0,n-1,nums);
        return root;
        
        
    }
private:
    void buildTree(TreeNode* &root,int left,int right,vector<int> &nums){
        if(left>right) return;
        int mid=(right+left+1)/2;
        root = new TreeNode(nums[mid]);
        buildTree(root->left,left,mid-1,nums);
        buildTree(root->right,mid+1,right,nums);
    }
    
};
