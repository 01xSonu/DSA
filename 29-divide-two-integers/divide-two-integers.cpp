class Solution {
public:
    int divide(int dividend, int divisor) {
        bool sign=true;
        long long ans=0;
        if(dividend>=0 && divisor<0){
            sign=false;
        }
        if(dividend<0 && divisor>0){
            sign=false;
        }
        long long n=abs((long long)dividend);
        long long d=abs((long long)divisor);
        if(dividend==divisor){
            return 1;
        }
        while(n>=d){
            int cnt=0;
            while(n>=(d<<(cnt+1))){
                cnt++;
            }
            ans=ans+(1LL<<cnt);
            n=n-(d<<cnt);
        }
        if(ans>=(1LL<<31) && sign==false){
            return INT_MIN;

        }
        else if(ans>=(1LL<<31) && sign==true){
            return INT_MAX;
        }
        else if(sign==true){
            return ans;
        }
        else{
            return (-ans);
        }
        
    }
};