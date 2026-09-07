class Solution {
public:
    bool posible(vector<int>& bloomDay,int Day,int m ,int k ){
        int n=bloomDay.size();
        int totalB=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=Day){
                cnt++;
                
            }
        else{
            totalB+=(cnt/k);
            cnt=0;
        }
        }
        totalB+=(cnt/k);
        return totalB>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long r=m*1LL*k*1LL;
        if(r>bloomDay.size()) return -1;
        int mini=INT_MAX;int maxi=INT_MIN;
         int n=bloomDay.size();
        for(int i= 0;i<n;i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi, bloomDay[i]);

        }
        int low=mini;int high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(posible( bloomDay,mid,m,k )){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};