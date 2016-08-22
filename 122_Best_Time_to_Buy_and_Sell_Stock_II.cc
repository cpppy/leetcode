class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)    return 0;
        int result=-prices[0];
        int getin=prices[0];
        for(int i=0;i<prices.size()-1;++i){
            if(prices[i]<prices[i+1]){
                result += prices[i+1];
                getin =prices[i+1];
                result-=getin;
                
            }
            else{
                result += prices[i]-prices[i+1];
                getin=prices[i+1];
            }
        }
        if(getin>0){
            result+=getin;
        }
        return result;
    }
};
