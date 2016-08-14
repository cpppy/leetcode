class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        if(z==0) return true;
        if(x+y>=z && z%gcd(x,y)==0) return true;
        return false;
    }
    
    int gcd(int x,int y) {
        if(y==0) return x;
        else return gcd(y,x%y);
    }
};
