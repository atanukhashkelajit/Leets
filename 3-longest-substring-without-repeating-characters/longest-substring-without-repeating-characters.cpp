class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int best = 0;
        int last[256];
        
        for(int i = 0; i < 256; i++) last[i] = -1;

        for(int right = 0; right < s.size(); right++) {
            char c = s[right];
            if(last[(int)c] >= left) {
                left = last[(int)c] + 1;
            }
            last[(int)c] = right;
            best = max(best, right - left + 1);
        }

        return best;
    }
};
