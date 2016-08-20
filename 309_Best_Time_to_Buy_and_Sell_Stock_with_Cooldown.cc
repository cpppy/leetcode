class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        vector<int> res(prices.size(),0);
        res[0]=0;
        res[1]=max(0,prices[1]-prices[0]);
        if(prices.size()==2) return res[1];
        res[2]=max(res[1],prices[2]-min(prices[0],prices[1]));
        if(prices.size()<=3) return res[prices.size()-1];
        for(int i=3;i<prices.size();++i){
            int a=0;
            if(res[i-1]>res[i-2]&&prices[i]>prices[i-1]){
                a=res[i-1]-prices[i-1]+prices[i]; 
            }
            int b=0;
            b=prices[i]-min(prices[0],min(prices[1],prices[2]));
            for(int j=3;j<i;++j){
                b=max(b,res[j-2]+prices[i]-prices[j]);
            }
            res[i]=max(max(a,b),max(res[i-1],res[i-3]+prices[i]-prices[i-1]));
        }
        return res[prices.size()-1];
    }
};
