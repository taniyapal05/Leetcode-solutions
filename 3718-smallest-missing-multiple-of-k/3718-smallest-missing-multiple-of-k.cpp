class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> hmap(102, 0);

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % k == 0) {
                int idx = nums[i] / k;
                hmap[idx]++; 
            }
        }

        for(int i = 1; i < 102; i++){
            if(hmap[i] == 0) return k * i;
        }

        return k;
    }
};