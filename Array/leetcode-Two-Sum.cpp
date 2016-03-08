//leetcode
//Two Sum
//medium
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        if(nums.size() < 2){
            return res;
        }else{
            res.resize(2);
            for(int i = 0; i < nums.size()-1; ++i){
                int j = i + 1; 
                while(j < nums.size()){
                    if(nums[i] + nums[j] == target){
                        res[0] = i;
                        res[1] = j;
                        return res;
                    }else{
                        j++;
                        continue;
                    }
                }
            }
        }
    }
};dw