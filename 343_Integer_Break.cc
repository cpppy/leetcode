class Solution {
public:
    int integerBreak(int n) {
        if(n==2)    return 1;
        if(n==3)    return 2;
        if(n==4)    return 4;
        int m=n/3;
        int b=n%3;
        if(b!=2){
            m--;
            b += 3;
        }
        return pow(3,m)*b;
        
    }
};
