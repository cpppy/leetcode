class Solution {
public:
    int myAtoi(string str) {
        int result=0;
        int k=1;
        int count_k=0;
        int count_val=0;
        int count_dig=0;
        for (int i = 0; i<str.size(); ++i){
            if(str[i]=='-') {
                k=k*(-1);
                count_k++;
            }
            if(str[i]=='+') {
                count_k++;
            }
            if(str[i]!=' ') count_val++;
            if(::isdigit(str[i])){
                count_dig++;
                int tmp=result;
                result = result * 10 + (str[i]-'0');
                if (k>0&&(result<tmp||count_dig>10)) {
                    result = 2147483647;
                    break;
                }
                if(k<0&&(result<tmp||count_dig>10)){
                    result= 2147483648;
                    break;
                }
            }
            if(::isalpha(str[i])||(str[i]==' '&&count_val!=0))   break;
	    }
	    if(count_k>1)   k=0;
	    result=result*k;
	    return result;
    }
};
