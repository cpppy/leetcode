class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0; 
        vector<bool> result(n,true);
        result[0]=false;
        result[1]=false;
        for(int i=2;i<=(int)sqrt(n);i++){
            if(result[i]){
                for(int j=i*i;j<n;j+=i){
                    result[j]=false;  
                }
            }
        }
        int res=0;
        for(int i=2;i<n;++i){
            if(result[i])   res++; 
        }
        return res;
    }
};
