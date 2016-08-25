class Solution {
public:
    string addBinary(string a, string b) {
        int len = max(a.size(),b.size());
        vector<string> result(len,"0");
        int i=a.size()-1,j=b.size()-1,k=len-1;
        int advance=0,isum=0;
        while(i>=0||j>=0){
            if(i<0) isum=(b[j]-'0')+advance;
            else if(j<0)   isum=(a[i]-'0')+advance;
            else isum=(a[i]-'0')+(b[j]-'0')+advance;
            advance=0;
            advance = isum/2;
            result[k]=to_string(isum%2);
            i--;
            j--;
            k--;
        }
        string res="";
        if(advance>0)   {
            res += "1";
        }
        for(int i=0;i<len;++i){
            res += result[i];
        }
        return res;
        
        
        
        
    }
};
