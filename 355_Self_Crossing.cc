class Solution {
public:
    bool isSelfCrossing(vector<int>& x) {
        if(x.size()<3) return false;
        for(int i=3;i<x.size();++i){
            if((x[i]>=x[i-2] && x[i-1]<=x[i-3]) || (i>=4 && x[i]>=x[i-2]-x[i-4] && x[i-1]==x[i-3]) || (i>=5 && x[i]>=x[i-2]-x[i-4] && x[i-2]>=x[i-4] && x[i-3]>=x[i-1] && x[i-1] >= x[i-3] - x[i-5]))
            return true;
        }
        return false;
    }
};
