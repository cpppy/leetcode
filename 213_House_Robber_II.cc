class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int> res(n,0);
        bool ci=false;
        res[0]=nums[0];
        res[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;++i){
           res[i]=max(res[i-2]+nums[i],res[i-1]);
        }
        vector<int> non1res(n,0);
        non1res[0]=0;
        non1res[1]=nums[1];
        for(int i=2;i<n;++i){
            non1res[i]=max(non1res[i-2]+nums[i],non1res[i-1]);
        }
        return max(res[n-2],non1res[n-1]);
    }
};
