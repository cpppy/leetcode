class Solution {
public:
    int calculate(string s) {
        int result=0;
        vector<int> nums;
        int cur=0;
        char op=NULL;
        for(int i=0;i<=s.size();++i){
            if(::isdigit(s[i])){
                if(cur!=0){
                    cur=cur*10+(s[i]-'0');
                }
                else{
                    cur=s[i]-'0';
                }
                    
                    
            }
            else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='\0'){
                if(op=='+'||op==NULL){
                    nums.push_back(cur);
                }
                else if(op=='-'){
                    nums.push_back((-1)*cur);
                }
                else if(op=='*'){
                    int tmp=nums[nums.size()-1];
                    tmp=tmp*cur;
                    nums[nums.size()-1]=tmp;
                }
                else if(op=='/'){
                    int tmp=nums[nums.size()-1];
                    tmp=tmp/cur;
                    nums[nums.size()-1]=tmp;
                }
                cur=0;
                op=s[i];
            }
            else continue;
            
        }
        for(int i=0;i<nums.size();++i){
            result+=nums[i];
        }
        return result;
    }
};
