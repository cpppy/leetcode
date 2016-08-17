class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> pos(k,0);
        for(int i=0;i<k;++i){
            pos[i]=i+1;
        }
        res.push_back(pos);
        while(pos[0]!=n-k+1){
            pos[k-1]++;
            if(pos[k-1]==n+1){
                for(int i=k-2;i>=0;--i){
                    if(pos[i]!=i-k+n+1){
                        pos[i]++;
                        while(i<k-1){
                            i++;
                            pos[i]=pos[i-1]+1;
                        }
                        break;
                    }
                }
            }
            res.push_back(pos);
        }
        return res;
    }
};
