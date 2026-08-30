class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int max_num = nums[0];
        int min_num = nums[0];

        int max_idx = 0;
        int min_idx = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max_num){
                max_num = nums[i];
                max_idx = i;
            }
            else if(nums[i] < min_num){
                min_num = nums[i];
                min_idx = i;
            }
        }

        int l = min(min_idx, max_idx);
        int r = max(min_idx, max_idx);

        int a, b, c;
        a = r + 1;
        b = nums.size() - l;
        c = (l + 1) + (nums.size() - r);

        return min({a, b, c});
    }
};