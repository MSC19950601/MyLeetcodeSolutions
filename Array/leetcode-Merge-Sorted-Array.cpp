//leetcode
//Merge Sorted Array
//easy
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        copy_n(nums2.begin(),n,nums1.begin()+m);
        std::sort(nums1.begin(),nums1.end());
    }
};
//however,I cannot believe it worked
