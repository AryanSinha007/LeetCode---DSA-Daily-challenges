class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ans=0;
            if(dividend == divisor) return 1;
            bool sign = true;
            if(dividend >=0 && divisor<0) sign =false;
            if(dividend <0 && divisor>=0) sign =false;
            long long n=llabs(dividend);
            long long d=llabs(divisor);
        while(n>=d){
           int cnt=0;
           while(n>=(d<<(cnt+1))){
            cnt++;
           }
            ans+=(1LL<<cnt);
            n=n-(d*(1LL<<cnt));
        }
        if(ans>=INT_MAX && sign==true) return INT_MAX;
        if(ans>=(1LL<<31) && sign==false) return INT_MIN;
        return sign ? ans : (-1*ans);
    }
};