class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapping;
        for(vector<int>::iterator iter=nums.begin();iter!=nums.end();++iter){
            mapping[*iter]++;
        }
        multimap<int,int,greater<int>> sortmap;
        for(unordered_map<int,int>::iterator iter=mapping.begin();iter!=mapping.end();++iter){
            sortmap.insert(pair<int,int> (iter->second,iter->first));
        }
        vector<int> res(k,0);
        multimap<int,int>::iterator iter = sortmap.begin();
        for(int i=0;i<k;++i){
            res[i]=iter->second;
            iter++;
        }
        return res;
        
        
        
    }
};
