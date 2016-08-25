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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if(root==NULL)  return result; 
        string curList=""; 
        curList += to_string(root->val);
        getList(root,curList,result);
        return result;
        
    }
private:
    void getList(TreeNode* root,string curList,vector<string> &result){
        if(root->left==NULL&&root->right==NULL){
            result.push_back(curList);
            return;
        }
        else{
            if(root->left) getList(root->left,curList+"->"+to_string(root->left->val),result);
            if(root->right) getList(root->right,curList+"->"+to_string(root->right->val),result);
        }
    }
};
