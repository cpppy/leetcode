class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<string> tmp;
        
        vector<string> cpstrs=strs;
        for(int i=0;i<strs.size();++i){
            sort(cpstrs[i].begin(),cpstrs[i].end());
        }
        multimap<string,int,greater<string>> vecsort;
        for(int i=0;i<cpstrs.size();++i) {
            vecsort.insert(pair<string,int>(cpstrs[i],i));
        }
        
        string sa="";
        for(multimap<string,int>::iterator it=vecsort.begin();it!=vecsort.end();++it){
            if(sa=="") sa=it->first;
            if(sa==it->first) tmp.push_back(strs[it->second]);
            else{
                res.push_back(tmp);
                tmp.clear();
                tmp.push_back(strs[it->second]);
                sa=it->first;
            }
        }
        res.push_back(tmp);
        sort(res.begin(),res.end());
        return res;
        
    }
};
