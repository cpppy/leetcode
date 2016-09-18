class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[10]={0};
        int column[9][10]={0};
        int subBoard[9][10]={0};
        for(int i=0;i<9;++i){
            memset(row,0,sizeof(row));
            for(int j=0;j<9;++j){
                if(board[i][j]!='.'){
                    if(!check(row,board[i][j]-'0')) return false;
                    if(!check(column[j],board[i][j]-'0')) return false;
                    if(!check(subBoard[(i/3)*3+j/3],board[i][j]-'0')) return false;
                    
                }
            }
        }
        return true;
    }
    bool check(int vec[],int val){
        if(vec[val]==1) return false;
        else{
            vec[val]=1;
            return true;
        }
    }
};
