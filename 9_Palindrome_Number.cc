class Solution {
public:
    bool isPalindrome(int x) {
        int oldx=x;
        int y = 0;
        while(x>0){
            y=y*10+(x%10);
            x=x/10;
        }
        return oldx==y;
    }
};
