class Solution {
public:
    int findNthDigit(int n) {
        int i=1;
        int sum=0;
        while(sum<n) {
            sum += 9*pow(10,i-1)*i;
            i++;
        }
        i--;
        sum -= 9*pow(10,i-1)*i;
        int prei=i-1;
        int prenum=0;
        while(prei>0){
            prenum = prenum*10+9;
            prei--;
        }
        int num=prenum+(n-sum+i-1)/i;
        int y=(n-sum)%i;
        if(y==0) y=i;
        int num2=num/pow(10,i-y);
        return num2%10;
    }
};
