class Solution {
public:
    int Atmost(vector<int>& nums, int goal) {
        if(goal<0) return 0;
        int l = 0, r = 0, cnt = 0, sum = 0;
        while (r < nums.size()) {
            sum = sum + nums[r];
            while (sum > goal) {
                sum -= nums[l];
                l++;
            }
            cnt = cnt + (r - l + 1);
            r++;
        }
        return cnt;
    }
    
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return Atmost(nums, goal) - Atmost(nums, goal - 1);
    }
};