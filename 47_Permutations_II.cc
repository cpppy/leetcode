class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> tmp;
        vector<int> used(nums.size(),0);
        getvec(tmp,used,0,nums);
        sort(res.begin(),res.end());
        vector<vector<int>>::iterator it=unique(res.begin(),res.end());
        res.erase(it,res.end());
        return res;
    }
    
private:
    vector<vector<int>> res;
    void getvec(vector<int> tmp,vector<int> used,int count,vector<int> &nums) {
        if(count==nums.size()) {
            res.push_back(tmp);
            return;
        }
        int a=INT_MAX;
        for(int i=0;i<nums.size();++i) {
            if(used[i]==0&&nums[i]!=a) {
                a=nums[i];
                tmp.push_back(nums[i]);
                used[i]=1;
                getvec(tmp,used,count+1,nums);
                tmp.pop_back();
                used[i]=0;
            }
            
        }
    }
};
