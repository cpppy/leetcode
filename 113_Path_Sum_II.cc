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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root==NULL) return res;
        vector<int> tmp;
        tmp.push_back(root->val);
        getvec(root,tmp,root->val,sum);
        return res;
    }

private:
    vector<vector<int>> res;
    
    void getvec(TreeNode* root,vector<int> tmp,int result,int sum){
        if(result!=sum&&root->left==NULL&&root->right==NULL) return;
        else if(result==sum&&root->left==NULL&&root->right==NULL) {
            res.push_back(tmp);
            return;
        }
        else{
            if(root->left) {
                vector<int> cptmp1=tmp;
                cptmp1.push_back(root->left->val);
                getvec(root->left,cptmp1,result+root->left->val,sum);
            }
            if(root->right) {
                vector<int> cptmp2=tmp;
                cptmp2.push_back(root->right->val);
                getvec(root->right,cptmp2,result+root->right->val,sum);
            }
        }
        
    }
    
};
