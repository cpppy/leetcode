class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0,count1=0,count2=0;
        for(int i=0;i<nums.size();++i){
            switch(nums[i]){
                case 0: count0++;
                case 1: count1++;
                case 2: count2++;
            }
        }
        for(int i=0;i<nums.size();++i){
            if(i<count0) nums[i]=0;
            else if(i<count1) nums[i]=1;
            else nums[i]=2;
        }
    }
};
