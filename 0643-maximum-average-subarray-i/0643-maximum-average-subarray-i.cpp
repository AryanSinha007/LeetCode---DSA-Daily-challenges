class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0,right=0;
        double maxi = 0;
        double sum=0;

        while(right!=k){
            sum+=nums[right];
            right++;
        }
        maxi=sum;
        for(right=k;right<nums.size();right++){
            sum+=nums[right] - nums[left];
            maxi=max(maxi,sum);
            left++;
            
        }
        return maxi/k;
    }
};