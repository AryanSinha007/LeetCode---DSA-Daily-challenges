class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0, right = 0;
        int maxi = 0;
        int cnt=0;

        string vowels = {'a', 'e', 'i', 'o', 'u'};

        while (right < k) {
            if (vowels.find(s[right] )!= string::npos) {
                cnt++;
            }
            right++;
        }
        maxi = cnt;

        for (right = k; right < s.size(); right++) {
            if (vowels.find(s[right] )!= string::npos) {
                cnt++;
            }
            if (vowels.find(s[left] )!= string::npos) {
                cnt--;
            }
            left++;
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};