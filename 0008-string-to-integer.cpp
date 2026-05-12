class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();
        long long ans = 0;
        int sign = 1;

        // 1. Leading whitespace hata
        while(i < n && s[i] == ' ') i++;

        // 2. Sign check kar
        if(i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-')? -1 : 1;
            i++;
        }

        // 3. Digit padh aur convert kar
        while(i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            ans = ans * 10 + digit;

            // 4. Overflow check - 32 bit ke bahar gaya to clamp kar
            if(sign * ans <= INT_MIN) return INT_MIN;
            if(sign * ans >= INT_MAX) return INT_MAX;

            i++;
        }

        return sign * ans;
    }
};
