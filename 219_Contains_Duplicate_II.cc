class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mapping;
        for(int i=0;i<nums.size();++i){
            if(mapping.find(nums[i])!=mapping.end()&&i-mapping[nums[i]]<=k) return true;
            else    mapping[nums[i]]=i;
        }
        return false;
    }
};
