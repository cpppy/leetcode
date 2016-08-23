class Solution {
public:
    int reverse(int x) {
        int num=0;
        while(x!=0){
            if(abs(num) > INT_MAX/10 )return 0;  //防止溢出
            num=num*10+(x%10);
            x=x/10;
        }
        return num;
    }
};
