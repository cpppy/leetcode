class Solution {
public:
    int numTrees(int n) {
        vector<int> res(n+1,0);
        res[0]=1;
        res[1]=1;
        res[2]=2;
        for(int i=3;i<=n;++i){
            for(int j=0;j<i;++j){
                res[i]+=res[j]*res[i-j-1];
            }
        }
        return res[n];
    }
};
