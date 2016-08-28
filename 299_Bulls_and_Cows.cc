class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0;
        int cows=0;
        int m[10]={0};
        for(int i=0;i<secret.size();++i){
            if(secret[i]==guess[i]){
                bulls++;
            }
            m[secret[i]-'0']++;
        }
        for(int i=0;i<guess.size();++i){
            if(m[guess[i]-'0']>0){
                cows++;
                m[guess[i]-'0']--; 
            }
        }
        return  to_string(bulls)+"A"+to_string(cows-bulls)+"B";
        
    }
};
