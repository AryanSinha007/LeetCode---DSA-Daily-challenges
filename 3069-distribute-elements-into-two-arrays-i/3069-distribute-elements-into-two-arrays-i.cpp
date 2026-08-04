class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>arr1;
        vector<int>arr2;
        int n=nums.size();
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int i=2,l=0,r=0;
        while(i<n){
            if(arr1[l]>arr2[r]){
                arr1.push_back(nums[i]);
                l++;
            }
            else{
                arr2.push_back(nums[i]);
                r++;
            }
            i++;
        }
        ans.insert(ans.end(),arr1.begin(),arr1.end());
        ans.insert(ans.end(),arr2.begin(),arr2.end());
                
            
        
        return ans;
    }
};