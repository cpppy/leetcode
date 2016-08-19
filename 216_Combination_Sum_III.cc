class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> tmp;
        getarray(tmp,1,0,k,n);
        return res;
        
        
    }
    void getarray(vector<int> tmp,int i,int sum,int k,int n){
        if(k==0&&sum==n) res.push_back(tmp);
        if(k<=0||sum>n||i>9) return;
        getarray(tmp,i+1,sum,k,n);
        tmp.push_back(i);
        getarray(tmp,i+1,sum+i,k-1,n);
        
        
        
    }
private:
    vector<vector<int>> res;
};
