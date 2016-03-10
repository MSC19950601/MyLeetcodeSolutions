//leetcode
//Single Number III\
//Medium
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0] != nums[1]){
            res.push_back(nums[0]);
        }
        if(nums[n - 1] != nums[n - 2]){
            res.push_back(nums[n - 1]);
        }
        
        for(int i = 1;i<n-1;i++){
            if(nums[i] != nums[i-1] && nums[i] != nums[i+1]){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};