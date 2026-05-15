class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2]; // pehla sum daal de

        for(int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                // target ke zyada close hai to update kar
                if(abs(sum - target) < abs(closestSum - target)) {
                    closestSum = sum;
                }

                if(sum < target) {
                    left++; // sum chota hai, bada kar
                }
                else if(sum > target) {
                    right--; // sum bada hai, chota kar
                }
                else {
                    return sum; // exact target mil gaya 👑
                }
            }
        }
        return closestSum;
    }
};
