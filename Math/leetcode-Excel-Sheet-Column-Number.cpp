//leetcode
//Excel Sheet Column Number
//Easy
class Solution {
public:
    int titleToNumber(string s) {
        if(s.size() == 1){
            return (s[s.size()-1]-'A')+1;
        }
        int res = 0;
        for(int i = 0;i<s.size()-1;++i){
            res += (s[i]-'A'+1)*pow(26,(s.size()-i-1));
        }
        return res+(s[s.size()-1]-'A')+1;
    }
};