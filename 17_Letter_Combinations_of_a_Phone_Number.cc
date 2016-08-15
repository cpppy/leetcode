class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits=="") return res;
        vector<string> dic={" ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        getstr(dic,digits,0,"");
        return res;
    }
    
private:
    vector<string> res;
    
    void getstr(vector<string>& dic,string digits,int i,string tmp){
        if(i==digits.size()) {
            res.push_back(tmp);
            return;
        }
        else{
            int val=digits[i]-'0';
            string s=dic[val];
            for(int j=0;j<s.size();++j){
                getstr(dic,digits,i+1,tmp+s[j]);
            }
        }
    }
};
