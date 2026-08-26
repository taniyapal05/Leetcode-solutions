class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string result = "";
        vector<int> hmap(101, 0);

        int idx = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1'){
                hmap[idx] = i;
                idx++;
            }
        }

        int start = -1,end, flag = 0;
        int min_len = 101;
        for(int i = 0; i <= idx - k; i++){
            int currStart = hmap[i];
            int currEnd = hmap[i + k - 1];
            int currLen = currEnd - currStart + 1;

            if(currLen < min_len || (currLen == min_len && s.substr(currStart, currLen) < s.substr(start,min_len))){
                start = hmap[i];
                end = hmap[i + k - 1];
                min_len = hmap[i + k -1] - hmap[i] + 1;
                flag = 1;
            }
        }

        if(start == -1) return result;
        return s.substr(start, min_len);
    }
};