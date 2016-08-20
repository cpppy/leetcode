class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int tmp=nums[0];
        int res=tmp;
        for(int i=1;i<nums.size();++i){
            tmp=max(nums[i],tmp+nums[i]);
            res=max(res,tmp);
        }
        return res;
    }
};
