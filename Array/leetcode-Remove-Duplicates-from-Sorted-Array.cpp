//leetcode
//Remove Duplicates from Sorted Array
//easy
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return std::distance(nums.begin(),unique(nums.begin(),nums.end()));
    }
};
