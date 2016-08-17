class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int result=1;
        if(n==0) return result;
        result+=9;
        while(n>=2){
            int tmp=9;
            for(int i=0;i<n-1;++i){
                tmp*=(9-i);
            }
            result += tmp;
            n--;
        }
        return result;
    }
};
