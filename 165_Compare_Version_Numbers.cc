class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1=transform(version1);
        vector<int> v2=transform(version2);
        int i=0,j=0;
        while(i<v1.size() || j<v2.size()){
            if(i>=v1.size())    v1.push_back(0);
            if(j>=v2.size())    v2.push_back(0);
            if(v1[i]>v2[j]) return 1;
            else if(v1[i]<v2[j])    return -1;
            else    {
                i++;
                j++;
            }
        }
        return 0;
        
    }
    
    vector<int> transform(string str){
        vector<int> res;
        res.clear();
        int result=0;
        int i=0;
        for(i;i<=str.size();++i){
            if(str[i]=='.'||str[i]=='\0'){
                res.push_back(result);
                result=0;
            }
            else{
                result=result*10+(str[i]-'0');
            }
        }
        return res;
    }
};
