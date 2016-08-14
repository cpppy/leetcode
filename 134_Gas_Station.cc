class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(gas.size()==0||cost.size()==0||gas.size()!=cost.size()) return -1;
        vector<int> nums(gas.size(),0);
        for(int i=0;i<gas.size();++i){
            nums[i]=gas[i]-cost[i];
        }
        int n=nums.size();
        int max=0,start=0;
        int prev=0,cur=0,sum=0;
        for(int i=0;i<n;++i){
            if(sum+nums[i]<=nums[i]){
                if(sum>max){
                    sum=max;
                    start=prev;
                }
                prev=i;
                sum=nums[i];
            }
            else{
                sum+=nums[i];
            }
        }
        for(int i=0;i<n;++i){
            if(sum+nums[i]>sum) sum+=nums[i];
            else break;
        }
        if(sum>max){
            sum=max;
            start=prev;
        }
        sum=0;
        for(int i=start;i<n+start;++i){
            if(i>=n) sum+=nums[i-n];
            else sum+=nums[i];
            if(sum<0) return -1;
        }
        return start;
        
    }
};
