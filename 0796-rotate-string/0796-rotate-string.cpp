class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        if(s.size() != goal.size()) return false;

        for(int i = 0; i < s.size(); i++){
            int k = 0, flag = 1;;

            for(int j = i+1; j < s.size(); j++){
                if(s[j] != goal[k]){
                    flag = 0;
                    break;
                }
                k++;
            }

            for(int l = 0; l <= i; l++){
                if(s[l] != goal[k]) {
                    flag = 0;
                    break;
                }

                k++;
            }

            if(flag == 1) return true;
        }

        return false;
    }
};