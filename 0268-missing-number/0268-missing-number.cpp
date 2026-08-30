class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) sum += nums[i];

        int range = nums.size();

        return range * (range + 1) / 2 - sum;
    } 
};