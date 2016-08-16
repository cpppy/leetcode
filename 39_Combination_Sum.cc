class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tmp;
        getvec(tmp,0,target,candidates);
        
        for(int i=0;i<res.size();++i){
            sort(res[i].begin(),res[i].end());
        }
        sort(res.begin(),res.end());
        vector<vector<int>>::iterator it=unique(res.begin(),res.end());
        res.erase(it,res.end());
        return res;
    }
    
private:
    void getvec(vector<int> tmp,int sum,int target,vector<int>& nums){
        if(sum==target) {
            res.push_back(tmp);
            return;
        }
        
        for(int i=0;i<nums.size();++i){
            if(sum+nums[i]<=target){
                tmp.push_back(nums[i]);
                getvec(tmp,sum+nums[i],target,nums);
                tmp.pop_back();
            }
        }
    }
    vector<vector<int>> res;
};
