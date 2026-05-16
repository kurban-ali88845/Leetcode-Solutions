class Solution {
public:
    vector<string> res;
    vector<string> map = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void solve(string digits, int i, string curr) {
        if(i == digits.size()) {
            res.push_back(curr);
            return;
        }
        string letters = map[digits[i] - '0'];
        for(char c : letters) {
            solve(digits, i+1, curr + c);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        solve(digits, 0, "");
        return res;
    }
};
