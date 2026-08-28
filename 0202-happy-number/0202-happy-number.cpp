class Solution {
public:
int sumofsquare(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit*digit;
        n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=sumofsquare(slow);
            fast=sumofsquare(sumofsquare(fast));
        }
        while(slow!=fast);
            return slow==1;
        
        
        }
    
};