class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0;
        int start = 0;

        // Har character ka last index store karne ke liye
        vector<int> lastIndex(256, -1);

        for(int end = 0; end < n; end++){
            // Agar character pehle aa chuka hai aur window me hai
            if(lastIndex[s[end]] >= start){
                start = lastIndex[s[end]] + 1; // window ka start aage badha
            }

            lastIndex[s[end]] = end; // current character ka index update
            maxLen = max(maxLen, end - start + 1); // max length update
        }

        return maxLen;
    }
};
