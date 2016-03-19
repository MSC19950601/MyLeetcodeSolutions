//leetcode
//Number of 1 Bits
//Easy
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            n = n&(n-1);
            count++;
        }
        return count;
        
    }
};