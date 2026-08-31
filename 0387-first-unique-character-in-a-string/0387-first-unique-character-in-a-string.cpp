class Solution {
public:
    int firstUniqChar(string s) {

        vector<int> mp(26, 0);

        for(int i = 0; i < s.size(); i++){
            int idx = s[i] - 'a';

            mp[idx]++;
        }

        for(int i = 0; i < s.size(); i++){
            int idx = s[i] - 'a';

            if(mp[idx] == 1) return i;
        }

        return -1;
    }
};