class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range = nums[0];
        for(int i = 1; i < nums.size(); i++) range = max(nums[i], range);

        int e_sum = (range * (range + 1)) / 2;

        int a_sum = 0;
        bool check_zero = false;
        for(int i = 0; i < nums.size(); i++){
            a_sum += nums[i];
            if(nums[i] == 0) check_zero = true;
        }

        int result = e_sum - a_sum;

        if(!check_zero) return 0;
        if(result == 0) return range + 1;
        return result;
    }
};