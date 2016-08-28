class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0) return false;
        stack<char> left;
        for(int i=0;i<s.size();++i){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                left.push(s[i]);  
            }
            else{
                if(left.empty())    return false;
                else{
                    char tmp = left.top();
                    left.pop();
                    if((tmp=='('&&s[i]==')')||(tmp=='['&&s[i]==']')||(tmp=='{'&&s[i]=='}'))   continue;
                    else    return false;
                }
            }
        }
        if(left.empty())    return true;
        else return false;
    }
};
