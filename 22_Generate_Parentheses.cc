class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s="";
        int leftnum=n,rightnum=n;
        generate(res,leftnum-1,rightnum,s+'(');
        return res;
        
    }
    void generate(vector<string> &res,int leftnum,int rightnum,string s){
        if(leftnum==0&&rightnum==0) res.push_back(s);
        if(leftnum>0) generate(res,leftnum-1,rightnum,s+'(');
        if(rightnum>0&&leftnum<rightnum) generate(res,leftnum,rightnum-1,s+')');
    }
};
