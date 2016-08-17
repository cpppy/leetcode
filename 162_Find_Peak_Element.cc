class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        
        int j=INT_MAX;
        int k=INT_MAX;
        for(int i=0;i<nums.size();++i) {
            if(i==0) {
                if(nums[i]>nums[i+1]){
                    j=i;
                }
            }
            else if(i==nums.size()-1) {
                if(nums[i]>nums[i-1]){
                    k=i;
                }
            }
            else if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) {
              return i;  
              break;
            }
            else continue;
        }
        return min(j,k);
    }
};
