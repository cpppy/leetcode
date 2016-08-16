class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> tmp;
        getvec(tmp,0,nums);
        sort(res.begin(),res.end());
        vector<vector<int>>::iterator it=unique(res.begin(),res.end());
        res.erase(it,res.end());
        return res;
    }
    
private:
    void getvec(vector<int> tmp,int i,vector<int>& nums){
        res.push_back(tmp);
        if(i==nums.size()) return;
        else{
            int j=i+1;
            getvec(tmp,j,nums);
            tmp.push_back(nums[i]);
            getvec(tmp,j,nums);
        }
    }
    vector<vector<int>> res;
};
