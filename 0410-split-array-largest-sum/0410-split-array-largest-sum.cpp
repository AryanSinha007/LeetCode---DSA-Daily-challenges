class Solution {
public:
    int split(vector<int>& nums, int mid){
        int n=nums.size();
        int sum=0;
        int student=1;
        for(int i=0;i<n;i++){
            if(sum+nums[i]>mid){
                student +=1;
                sum=nums[i];
            }
            else{
        
                sum+=nums[i];
            }
        }
        return student;
    }
    int splitArray(vector<int>& nums, int k) {
     int n=nums.size();
     int sum=0;
     int maxi=INT_MIN;
     for(int i=0;i<n;i++){
        maxi=max(maxi,nums[i]);
         sum= sum + nums[i];
     }   
     int low=maxi;
     int high=sum;
     while(low<=high){
        int mid=(low+high)/2;
        int arr=split(nums,mid);
        if(arr>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
     }
     return low;
    }
};