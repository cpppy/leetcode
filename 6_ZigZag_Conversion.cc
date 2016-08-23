class Solution {
public:
    string convert(string s, int numRows) {
        if(s==""||numRows==1)    return s;
        int len=s.size();
        vector<string> partition(numRows,"");
        int i=0;
        int j=0,a; 
        while(len){
            partition[j]+=s[i];
            i++;
            if(j==0)    a=1;
            if(j==numRows-1)  a=-1;
            j+=a;
            len--;
        }
        string result;
        for(int i=0;i<numRows;++i){
            result+=partition[i];
        }
        return result;
    }
};
