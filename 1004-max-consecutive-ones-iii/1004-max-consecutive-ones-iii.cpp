class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,len=0,maxlen=0,zeroes=0;
        for(int right=0;right<nums.size();right++ ){
            if(nums[right]==0) zeroes++;
            if(zeroes>k){
                if(nums[l]==0){
                    zeroes--;
                }
                l++;
            }
            if(zeroes<=k){
                maxlen=max(maxlen,right-l+1);
            }
        }
        return maxlen;
    }
};