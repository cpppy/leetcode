class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1||nums[0]<nums[nums.size()-1]) return nums[0];
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=(left+right)/2;
            if(nums[left]>nums[mid]){
                right=mid;
                left++;
            }
            else if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else return nums[left];
            
        }
        return nums[left];
    }
};
