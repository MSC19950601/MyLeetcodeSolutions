//leetcode
//Happy Number
//Easy
class Solution {
public:
    bool isHappy(int n) {
        while(n > 6){
            int next = 0;
            while(n){
                next += pow((n%10),2);
                n/=10;
            }
            n = next;
        }
        return n == 1;
    }
};