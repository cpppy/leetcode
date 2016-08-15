class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=(left+right)/2;
            if(nums[mid]<target){
                left=mid+1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid;
                break;
            }
        }
        if(nums[left]==target){
            int i=left;
            while(nums[i]==target&&i>=0){
                i--;
            }
            res[0]=i+1;
            int j=left;
            while(nums[j]==target&&j<nums.size()){
                j++;
            }
            res[1]=j-1;
        }
        return res;
    }
};
