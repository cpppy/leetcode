class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.empty()&&t.empty()) return true;
        if(s.size()!=t.size())  return false; 
        unordered_map<char,int> smapping;
        unordered_map<char,int> tmapping;
        for(int i=0;i<s.size();++i){
            if(smapping.find(s[i])!=smapping.end()){
                if(t[smapping[s[i]]]!=t[i])  return false;
            }
            else{
                if(tmapping.find(t[i])!=tmapping.end()) return false;
                smapping[s[i]]=i; 
                tmapping[t[i]]=i;
            }
        }
        return true;
    }
};
