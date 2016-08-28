class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> word=splitStr(str);
        if(pattern.size()!=word.size())  return false;
        unordered_map<char,int> mapping;
        unordered_map<string,int> wordmapping;
        for(int i=0;i<pattern.size();++i){
            if(mapping.find(pattern[i])!=mapping.end()){
                if(word[mapping[pattern[i]]]!=word[i]){
                    return false;
                }
            }
            else{
                if(wordmapping.find(word[i])!=wordmapping.end())  return false;
                mapping[pattern[i]]=i;
                wordmapping[word[i]]=i;
            }
        }
        return true;
    }
private:
    vector<string> splitStr(string str){
        vector<string> result;
        string word="";
        for(int i=0;i<str.size();++i){
            if(str[i]==' '){
                result.push_back(word);
                word="";
            }
            else    word+=str[i];
        }
        result.push_back(word);
        return result;
    }
};
