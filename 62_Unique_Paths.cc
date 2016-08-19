class Solution {
public:
    int uniquePaths(int m, int n) {
        int a=m-1;
        int b=n-1;
        if(a==0||b==0) return 1;
        double res=1;
        int j=1;
        for(int i=a+1;i<=a+b;++i) {
            res*=i;
            res/=j;
            j++;
        }
        return (int)res;
        
        
        
    }
};
