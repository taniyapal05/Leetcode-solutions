class Solution {
public:
    string intToRoman(int num) {
        string once[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
        string tence[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string hundred[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string thousand[] = {"", "M", "MM", "MMM"};

        return thousand[num/1000] + hundred[(num%1000)/100] + tence[(num%100)/10] + once[num%10];
    }
};