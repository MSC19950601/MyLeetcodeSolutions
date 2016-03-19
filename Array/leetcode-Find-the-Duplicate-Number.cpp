//leetcode
//Find the Duplicate Number
//Medium
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int res;
        int size = nums.size();
        if(size == 1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(int i = 1;i < size - 1;i++){
            if(nums[i] == nums[i-1]){
                return nums[i];
            }
        }
        
    }
};