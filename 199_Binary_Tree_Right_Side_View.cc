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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root==NULL) return res;
        queue<TreeNode*> que;
        que.push(root);
        que.push(NULL);
        TreeNode* p=NULL;
        while(!que.empty()){
                p=que.front();
                que.pop();
                if(p!=NULL){
                    if(p->left) que.push(p->left);
                    if(p->right)    que.push(p->right);
                    if(que.front()==NULL){
                        res.push_back(p->val);
                    }
                }
                else{
                    if(que.empty()) break;
                    else que.push(NULL);
                }
                
            
            
        }
        return res;
        
    }
};
