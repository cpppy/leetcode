class Solution {
public:
    int maxProduct(vector<string>& words) {
        if(words.empty()||words.size()==1)  return 0;
        vector<int> binwords(words.size(),0);
        for(int i=0;i<words.size();++i){
            for(int j=0;j<words[i].size();++j){
                binwords[i]|=1<<(words[i][j]-'a');
            }
        }
        int m=0;
        int maxres=0;
        for(int i=0;i<words.size()-1;++i){
            for(int j=i+1;j<words.size();++j){
                if((binwords[i]&binwords[j])==0){
                    m=words[i].size()*words[j].size();
                    maxres=max(m,maxres);
                }
            }
        }
        return maxres;
        
    }
    
};
