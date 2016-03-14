//leetcode
// Maximum Subarray
//Medium
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currentMax = 0;
        int finalMax = INT_MIN;
        int begin = 0,end = 0;
        for(int i = 0;i < n; i++){
            if(currentMax < 0){
                currentMax = nums[i];
                begin = i;
            }else{
                currentMax+=nums[i];
            }
            if(currentMax > finalMax){
                finalMax = currentMax;
                end = i;
            }
        }
        return finalMax;
    }
};