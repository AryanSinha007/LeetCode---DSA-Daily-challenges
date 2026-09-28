class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        int cnt=0;
        int avg=0;
        int left=0,right=0;
        while(right<k){
            sum+=arr[right];
            right++;
        }
        avg=sum/k;
        if(avg>=threshold){
                cnt++;
            }
        for(right=k;right<arr.size();right++){
            sum+=arr[right]-arr[left];
            avg=sum/k;
            if(avg>=threshold){
                cnt++;
            }
            left++;
        }
        return cnt;
    }
};