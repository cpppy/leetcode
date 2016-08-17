class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3) return false;
        int m1=INT_MAX;
        int m2=m1;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<=m1) m1=nums[i];
            else if(nums[i]<=m2) m2=nums[i];
            else return true;
        }
        return false;
        
    }
};
