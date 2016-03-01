//leetcode
//Move Zeroes
//easy
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto i = remove(nums.begin(),nums.end(),0);
        while(i != nums.emd()){
          *i=0;
          i++;
        }
    }
};
