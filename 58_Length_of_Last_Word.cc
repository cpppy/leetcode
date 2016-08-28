class Solution {
public:
    int lengthOfLastWord(string s) {
        int result=0;
        for(int i=0;i<s.size();++i){
            if(s[i]==' '){
                if(s[i+1]!=' '&&s[i+1]!='\0')   result=0;
            }
            else{
                result++;
            }
        }
        return result;
    }
};
