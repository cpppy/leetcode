class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()==0) return res;
        vector<int> tmp;
        getarray(res,tmp,nums);
        return res;
        
        
    }
    void getarray(vector<vector<int>> &res,vector<int> tmp,vector<int> nums){
        if(nums.empty()) {
            res.push_back(tmp);
            return;
        }
        for(int i=0;i<nums.size();++i) {
            vector<int> copynums=nums;
            vector<int> copytmp=tmp;
            copytmp.push_back(copynums[i]);
            swap(copynums[i],copynums[nums.size()-1]);
            copynums.pop_back();
            getarray(res,copytmp,copynums);
            copynums.clear();
            copytmp.clear();
        }
    }
    
};
