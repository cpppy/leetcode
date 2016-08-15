class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> res(m,vector<int>(n,0));
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(obstacleGrid[i][j]==1) res[i][j]=0;
                else if(i==0&&j==0){
                    if(obstacleGrid[i][j]==0) res[i][j]=1;
                }
                else if(i==0&&j!=0) res[i][j]=res[i][j-1];
                else if(j==0&&i!=0) res[i][j]=res[i-1][j];
                else res[i][j]=res[i-1][j]+res[i][j-1];
            }
        }
        return res[m-1][n-1];
        
    }
};
