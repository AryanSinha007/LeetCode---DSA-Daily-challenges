class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0,maxlen=0,zeroes=0;
       for(int right=0;right<nums.size();right++){
        if(nums[right]==0) zeroes++;
        while(zeroes>1){
            if(nums[left]==0){
                zeroes--;
            }
                left++;
        }
            maxlen=max(maxlen,right-left);
       }
        return maxlen;
    }
};