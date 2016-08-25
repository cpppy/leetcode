class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        if(strs.size()==0) return result;
        if(strs.size()==1)  return strs[0];
        vector<char> sta;
        for(int ii=0;ii<strs[0].size();++ii){
            sta.push_back(strs[0][ii]);
        }
        for(int i=1;i<strs.size();++i){
            if(strs[i].size()<sta.size()){     //compare the lenth
                while(sta.size()-strs[i].size()){
                    sta.pop_back();
                }
            }
            int si=sta.size();
            while(si){  //compare the letters
                if(strs[i][si-1]!=sta[si-1]){
                    while(sta.size()>si-1){
                        sta.pop_back();
                    }
                }
                si--;
            }
            if(sta.empty()) return result;
        }
        
        for(int j=0;j<sta.size();++j){
            result+=sta[j];
        }
        return result;
    }
}; 
