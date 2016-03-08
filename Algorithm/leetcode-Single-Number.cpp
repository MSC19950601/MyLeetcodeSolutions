//Algorithm
//Single Number
//Medium
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] != nums[i-1] && nums[i] != nums[i+1]){
                return nums[i];
            }else{
                continue;
            }
        }
    }
};