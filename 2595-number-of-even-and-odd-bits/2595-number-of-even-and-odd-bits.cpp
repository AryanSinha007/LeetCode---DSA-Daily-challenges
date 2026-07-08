class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0,odd=0,idx=0;
        while(n>0){
            if(n&1 && idx%2==0) even++;
            if(n&1 && idx%2==1) odd++;
            idx++;
            n=n>>1;
        }
        return {even,odd};
    }
};