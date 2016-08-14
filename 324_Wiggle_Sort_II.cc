class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> cp = nums;
        sort(cp.begin(),cp.end());
        int j=nums.size()-1;
        for(int i=1;j<nums.size();++++i) {
            if(i>=nums.size()) i=0;
            nums[i]=cp[j];
            j--;
        }
        
    }
};
