class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==0){
            vector<vector<int>> res0;
            return res0;
        }
        vector<vector<int>> res(n,vector<int>(n,0));
        int i=0,j=0;
        res[i][j]=1;
        while(res[i][j]!=n*n){
            if(j+1<n&&res[i][j+1]==0){
                for(j=j+1;j<n&&res[i][j]==0;++j){
                    res[i][j]=res[i][j-1]+1;
                }
                j--;
            }
            else if(i+1<n&&res[i+1][j]==0){
                for(i=i+1;i<n&&res[i][j]==0;++i){
                    res[i][j]=res[i-1][j]+1;
                }
                i--;
            }
            else if(j-1>=0&&res[i][j-1]==0){
                for(j=j-1;j>=0&&res[i][j]==0;--j){
                    res[i][j]=res[i][j+1]+1;
                }
                j++;
            }
            else if(i-1>=0&&res[i-1][j]==0){
                for(i=i-1;i>=0&&res[i][j]==0;--i){
                    res[i][j]=res[i+1][j]+1;
                }
                i++;
            }
            else{
                continue;
            }
        }
        return res;
        
    }
};
