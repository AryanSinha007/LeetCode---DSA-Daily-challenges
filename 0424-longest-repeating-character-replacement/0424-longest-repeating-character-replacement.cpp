class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,right=0,maxlen=0,maxf=0;
        unordered_map<char,int> freq;

        for(right=0;right<s.size();right++){
            freq[s[right]]++;
            maxf=max(maxf,freq[s[right]]);

            while((right-left+1)-maxf>k){
                freq[s[left]]--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);

        }
        return maxlen;

    }
};