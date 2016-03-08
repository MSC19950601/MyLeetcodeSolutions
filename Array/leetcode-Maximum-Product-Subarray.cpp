//leetcode
//Maximum Product Subarray
//medium
class Solution {
public:
    int maxProduct(vector<int>& nums){
        int res;
        if(nums.size() == 1){
            return nums[0];
        }else{
            int r = nums[0];
            int proMax,proMin;
            for(int i = 1, proMax = r, proMin = r;i < nums.size();i++){
                if(nums[i] < 0){
                    swap(proMax,proMin);
                }
                proMax = max(nums[i],nums[i]*proMax);
                proMin = min(nums[i],nums[i]*proMin);
                r = max(r,proMax);
            }
            return r;
        }
        
    }
};