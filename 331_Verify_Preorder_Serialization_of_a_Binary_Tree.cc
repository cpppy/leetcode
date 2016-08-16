class Solution {
public:
    bool isValidSerialization(string preorder) {
        stack<char> sta;
        char a;
        sta.push(preorder[0]);
        for(int i=1;i<preorder.size();++i){
            if(preorder[i]!=','&&preorder[i]!='\0'&&preorder[i]!='#'){
                if(preorder[i-1]==','){
                    sta.push(preorder[i]);
                }
            }
            else if(preorder[i]=='#'){
                while(!sta.empty()&&sta.top()=='#'){
                    sta.pop();
                    if(sta.empty()) {
                        return false;
                    }
                    else sta.pop();
                }
                sta.push('#');
            }
        }
        if(!sta.empty()){
            a=sta.top();
            sta.pop();
            if(a=='#'&&sta.empty()) return true;
            else return false;
        }
        else return false;

    }
};
