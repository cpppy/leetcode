class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        if(num<0)   return res;
        res.push_back(0);
        for(int i=1;i<=num;++i){
            res.push_back(res[i>>1]+(i&1));
        }
        return res;
    }
};
