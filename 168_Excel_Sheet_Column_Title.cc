class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> result;
        if(nums.empty()||k%nums.size()==0)  return;
        int newk=k%nums.size();
        int startPoint=nums.size()-newk;
        for(int i=0;i<nums.size();++i){
            result.push_back(nums[startPoint]);
            startPoint++;
            if(startPoint==nums.size()) startPoint=0;
        }
        nums=result;
        
    }
};
