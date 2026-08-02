class Solution {
public:
    int jump(vector<int>& nums) {
        int farthest=0;
        int l=0,r=0;
        int jumps=0;
        while(r<nums.size()-1){
            for(int idx=l;idx<=r;idx++){
                farthest=max(farthest,idx+nums[idx]);
            }
        if (farthest == r) return -1;  
                
            l=r+1;
            r=farthest;
            jumps++;
        }
    return jumps;
    }
};