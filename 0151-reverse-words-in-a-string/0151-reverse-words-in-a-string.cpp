class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int i = 0;
        int pre = 0;
        int end = 0;

        while(i < s.length()){
            while(s[i] == ' ' && i < s.length()){
                i++;
            }
           if(i == s.length()) break;

            while(s[i] != ' ' && i < s.length()){
                s[end] = s[i];
                end++;
                i++;
            }

            reverse(s.begin() + pre, s.begin() + end);
            s[end] = ' ';
            end++;
            pre = end;
            i++;
        }

        return s.substr(0, end - 1);
    }
};