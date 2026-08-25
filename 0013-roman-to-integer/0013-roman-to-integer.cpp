class Solution {
public:
    int romanToInt(string s) {
        map<char, int> val = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        }; 

        int ans = val[s[s.size() - 1]];

        for(int i = s.size() - 2; i >= 0; i--){
            if(val[s[i]] < val[s[i+1]]) ans -= val[s[i]];
            else  ans += val[s[i]];
        }

        return ans;
    }
};