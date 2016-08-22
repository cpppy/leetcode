class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res;
        if(nums.size()==0)    return res;
        if(nums.size()==1)  return nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i]!=nums[i+1]){
                res.push_back(nums[i]);
            }
            else    i++;
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]){
            res.push_back(nums[nums.size()-1]);
        }
        return res;
    }
};
