class Solution {
public:

    long long TotalHrs(vector<int>& piles, int speed, int h){
        long long totalHrs = 0;

        for(int x : piles){
            totalHrs += ((long long)x + speed - 1) / speed;

            // Correct early stop
            if(totalHrs > h)
                return totalHrs;
        }

        return totalHrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(TotalHrs(piles, mid, h) <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};