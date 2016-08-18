class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int> res;
        res.push_back(1);
        vector<int> pos(primes.size(),0);
        int num=1;
        int tmpmin=1;
        while(num<n) {
            tmpmin=INT_MAX;
            //int choosei=0;
            for(int i=0;i<primes.size();i++) {
                tmpmin=min(tmpmin,primes[i]*res[pos[i]]);
            }
            for(int i=0;i<primes.size();i++) {
                if(tmpmin==primes[i]*res[pos[i]]) {
                    //tmpmin=primes[i]*res[pos[i]];
                    //choosei=i;
                    pos[i]++;
                }
            }
            //pos[choosei]++;
            //一个循环中可能会有多个相同大小的最小tmpmin，pos[i]需要都进行+1，以免下次又被添加进res，造成res中出现重复的数
            num++;
            res.push_back(tmpmin);
        }
        return tmpmin;
    }
};
