class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        if(s.size()<=9) return res;
        unordered_map<char,int> mapping;
        mapping['A']=0;
        mapping['C']=1;
        mapping['G']=2;
        mapping['T']=3;
        unordered_map<long long,int> countmap;
        long long sum=0;
        for(int i=0;i<s.size();++i)
        {
            sum=sum<<2;
            sum &= 0xFFFFF;
            sum |=mapping[s[i]];
            if(i<9) continue;
            else
            {
                if(countmap.find(sum)!=countmap.end())
                {
                    res.push_back(s.substr(i-9,10));
                }
                else
                {
                    countmap[sum]=i;
                }
            }
    
        }
        vector<string>::iterator it=unique(res.begin(),res.end());
        res.erase(it,res.end());
        return res;
        
    }
};
