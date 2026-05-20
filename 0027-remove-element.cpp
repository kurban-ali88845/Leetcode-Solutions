class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // ye pointer un elements ke liye jo val ke equal nahi
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]!= val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
