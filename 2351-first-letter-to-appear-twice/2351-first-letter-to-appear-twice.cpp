class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> mp(26, 0);

        for(int i = 0; i < s.size(); i++){
            int idx = s[i] - 'a';
            mp[idx]++;

            if(mp[idx] == 2) return s[i];
        }

    return 'a';
    }
};