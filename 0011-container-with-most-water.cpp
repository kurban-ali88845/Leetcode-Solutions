class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while(left < right) {
            // Current container ka area
            int h = min(height[left], height[right]);
            int w = right - left;
            int area = h * w;
            maxWater = max(maxWater, area);

            // Jo line choti hai usko move karo
            if(height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxWater;
    }
};
