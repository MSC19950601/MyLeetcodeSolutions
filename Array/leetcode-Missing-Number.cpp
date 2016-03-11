//leetcode
//Missing Number
//Medium
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size() == 1){
            if(nums[0] == 1){
                return 0;
            }
            if(nums[0] == 0){
                return 1;
            }
        }
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums[1]-nums[0] > 1){
            return nums[0] + 1;
        }
        
        if(nums[n-1]-nums[n-2] > 1){
            return nums[n-2] + 1;
        }
        for(int i = 1; i < n-1; i++){
            if(nums[i+1] - nums[i] == 2 ){
                return nums[i] + 1;
            }
        }
        if(nums[0] == 0){
            return nums[n-1] + 1;
        }else{
            return 0;
        }
    }
};