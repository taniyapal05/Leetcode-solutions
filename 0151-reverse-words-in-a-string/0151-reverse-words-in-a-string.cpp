class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());                    //reverse complete string

        int i = 0;
        int pre = 0;
        int end = 0;

        while(i < s.length()){
            while(s[i] == ' ' && i < s.length()){        //skip extra space
                i++;
            }
           if(i == s.length()) break;

            while(s[i] != ' ' && i < s.length()){
                s[end] = s[i];                          //shifting 
                end++;
                i++;
            }

            reverse(s.begin() + pre, s.begin() + end);  //reversing of a word
            s[end] = ' ';                               //giving space after each word
            end++;
            pre = end;
            i++;
        }

        return s.substr(0, end - 1);
    }
};