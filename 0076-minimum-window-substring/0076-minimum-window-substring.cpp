class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0, r = 0, minlen = INT_MAX,cnt=0,sidx=-1;
        unordered_map<char, int> mpp;
        int n = s.size();
        int m = t.size();
        for (int i = 0; i < m; i++) {
            mpp[t[i]]++;
        }
        while (r < n) {
            if (mpp[s[r]] > 0) {
                cnt++;
            }
                mpp[s[r]]--;
            while (cnt == m) {
                if (r - l + 1 < minlen) {
                    minlen = (r - l + 1);
                    sidx = l;

                }
                    
                mpp[s[l]]++;
                if (mpp[s[l]] > 0) {
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return sidx == -1 ? "" : s.substr(sidx, minlen);
    }
};