//leetcode
//Kth Largest Element in an Array  
//Medium
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        auto it = nums.begin() + k - 1;
        return *it;
    }
};