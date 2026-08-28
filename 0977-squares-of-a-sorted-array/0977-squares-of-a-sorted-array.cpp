class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int pos=n;

        for(int i=0;i<n;i++){
            if(nums[i]>=0){
               pos=i;
                 
                break;
            }
        }
            int neg=pos-1;
       
            while(pos<n && neg>=0){
            
            
            if(abs(nums[pos])>abs(nums[neg])){
                ans.push_back(nums[neg]*nums[neg]);
                neg--;
            }
            else {
                ans.push_back(nums[pos]*nums[pos]);
                pos++;
            }
            }
            while(neg>=0){
                ans.push_back(nums[neg]*nums[neg]);
                neg--;
            }
            while(pos<n){
                ans.push_back(nums[pos]*nums[pos]);
                pos++;
            }


        return ans;
        
        
    }
};