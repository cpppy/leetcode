class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[m-1].size();
        vector<vector<int>> nums=triangle;
        int i=1;
        while(i<m){
            for(int j=0;j<nums[i].size();++j){
                if(j==0)  nums[i][j]=nums[i-1][j]+nums[i][j];
                else if(j==nums[i].size()-1) nums[i][j]=nums[i-1][j-1]+nums[i][j];
                else nums[i][j]=min(nums[i-1][j-1],nums[i-1][j])+nums[i][j];
            }
            i++;
        }
        int result=INT_MAX;
        for(int j=0;j<n;++j){
            result=min(result,nums[m-1][j]);
        }
        return result;
    }

};
