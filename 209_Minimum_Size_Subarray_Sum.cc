class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int minlen=INT_MAX;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();++i){
            int j=i;
            while(sum<s&&j<nums.size()){
                sum+=nums[j++];
                count++;
            }
            if(sum>=s){
                minlen=min(minlen,count);
            }
            sum=0;
            count=0;
            
        }
        if(minlen==INT_MAX) return 0;
        else return minlen;
    }
};
