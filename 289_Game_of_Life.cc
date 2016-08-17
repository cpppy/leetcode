class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        if(board.empty()) return;
        vector<vector<int>> copyb=board;
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                int val=getNeigh(copyb,i,j);
                if(val<2||val>3) board[i][j]=0;
                if(copyb[i][j]==0&&val==3) board[i][j]=1;
                
            }
            
        
        }
    }
private:   
    int getNeigh(vector<vector<int>>& board,int x,int y){
        int count=0;
        int m=board.size();
        int n=board[0].size();
        for(int i=x-1;i<=x+1;++i){
            for(int j=y-1;j<=y+1;++j){
                if(i<0||j<0||i>=m||j>=n||(i==x&&j==y)) continue;
                if(board[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};
