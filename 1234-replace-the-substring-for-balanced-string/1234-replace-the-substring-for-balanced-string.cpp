class Solution {
public:
    int balancedString(string s) {
        int left = 0, right = 0;
        int ans = INT_MAX;
        int target=s.size()/4;
        int st[128]={0};
        for (int i = 0; i < s.size(); i++) {
            st[s[i]]++;
        }
         if (st['Q'] == target &&
            st['W'] == target &&
            st['E'] == target &&
            st['R'] == target) {
            return 0;
        }
        for (right = 0; right < s.size(); right++) {
            st[s[right]]--;
            while (left<=right && st['Q'] <= target && st['W'] <= target &&
                   st['E'] <= target && st['R'] <= target) {
                ans = min(ans, right - left + 1);
                st[s[left]]++;
                left++;
            }
        }
        return ans;
    }
};