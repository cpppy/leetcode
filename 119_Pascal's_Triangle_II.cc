class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> a;
        vector<int> b;
        a.push_back(1);
        if(rowIndex==0)  return a;
        b.push_back(1);
        b.push_back(1);
        a.clear();
        a=b;
        for(int i=2;i<=rowIndex;++i){
            for(int j=1;j<i;++j){
                b[j]=a[j-1]+a[j];
            }
            b.push_back(1);
            a.clear();
            a=b;
        }
        return b;
        
    }
};
