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

        int l = min(min_idx, max_idx);       //left index
        int r = max(min_idx, max_idx);       //right index

        int a, b, c;

        a = r + 1;                           //Distance from front
        b = nums.size() - l;                 //Distance from end
        c = (l + 1) + (nums.size() - r);     //Some distance from front and some is from end

        return min({a, b, c});               //Minimum of all(a, b, c) distances
    }
};