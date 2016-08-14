class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> tmp;
        vector<int> used(candidates.size(),0);
        getvec(candidates,tmp,0,0,target);
        sort(res.begin(),res.end());
        vector<vector<int>>::iterator it=unique(res.begin(),res.end());
        res.erase(it,res.end());
        return res;
        
    }
    
    
private:
    vector<vector<int>> res;
    void getvec(vector<int>& nums,vector<int> tmp,int begin,int sum,int target) {
        if(sum>target) return;
        if(sum==target){
            res.push_back(tmp);
            return;
        }
        int a=INT_MAX;
        for(int i=begin;i<nums.size();++i){
            if(nums[i]!=a){
                tmp.push_back(nums[i]);
                getvec(nums,tmp,i+1,sum+nums[i],target);
                tmp.pop_back();
            }
        }
        
        
    }
};
