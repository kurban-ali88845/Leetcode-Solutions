class Solution {
public:
    bool isPalindrome(int x) {
        // Negative ya 10,20,30... ye sab false, 0 chod ke
        if(x < 0 || (x % 10 == 0 && x != 0)) return false;
        
        int reversed = 0;
        while(x > reversed) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }
        
        // Even digits: x == reversed, Odd digits: x == reversed/10
        return x == reversed || x == reversed / 10;
    }
};
