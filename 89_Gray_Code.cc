class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        
        long long a=0;
        res.push_back(0);
        if(n==0) return res;
        res.push_back(1);
    
        for(int i=1;i<n;++i){
            vector<int> tmp=res;
            for(int j=tmp.size()-1;j>=0;--j){
                res.push_back(tmp[j]|(1<<i));  
            }
            tmp.clear();
        }
        
        return res;
    }
};
