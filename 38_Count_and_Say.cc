class Solution {
public:
    string countAndSay(int n) {
        string str;
        string result="1";
        while(n-1){
            str=result;
            result="";
            int count=1;
            for(int i=0;i<str.size();++i){
                if(str[i]==str[i+1]){
                    count++;
                }
                else{
                    result+=to_string(count)+str[i];
                    count=1;
                }
            }
            n--;
        }
        return result;
    }
};
