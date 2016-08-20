class Solution {
public:
    int jump(vector<int>& nums){
        int reach=0;
        int curlast=0;
        int count=0;
        
        for(int i=0;i<nums.size();++i){
            if(i>curlast){
                curlast=reach;
                count++;
            }

            reach=max(reach,i+nums[i]);
        }
        return count;
    }
};
