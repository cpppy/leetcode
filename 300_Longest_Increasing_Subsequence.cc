class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0) return 0;
        vector<int> d(nums.size(),0);
        d[0]=1;
        int maxlen=1;
        for(int i=1;i<nums.size();++i){
            d[i]=1;
           
            for(int j=0;j<i;++j){
                if(nums[j]<nums[i]){
                    d[i]=max(d[i],d[j]+1); 
                    //d[i] restore the longest subsq which was using nums[i] as the tail
                }
                
            }
            maxlen=max(maxlen,d[i]);   
            //maxlen restore the longest subsq in the elements combination from d[0] to d[n-1];
        }
        
        return max(maxlen,d[nums.size()-1]);
    }
};
