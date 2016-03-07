class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     //sd
        //nums.erase(unique(nums.begin(),nums.end()),nums.end());
        vector<vector<int>> res;
        int left,right;
        vector<int> eachone;
        eachone.resize(3);
        if(nums.size() < 3){
            return res;
        }else{
             sort(nums.begin(),nums.end());
            for(int i = 0; i < nums.size()-2; ++i){
                if(i > 0 && nums[i] == nums[i-1]){
                    continue;
                }
                //std::vector<int> eachone;
                left = i+1;
                right = nums.size()-1;
                while(left < right){
                    if(nums[left] + nums[right] == -nums[i]){
                        while(left + 1 < nums.size() && nums[left] == nums[left +1]){
                            left++;
                        }
                        while(right - 1 > 0 && nums[right] == nums[right - 1 ]){
                            right--;
                        }
                        eachone[0] = nums[i];
                        eachone[1] = nums[left];
                        eachone[2] = nums[right];
                        //eachone.push_back(nums[i]);
                        //sort(eachone.begin(),eachone.end());
                        res.push_back(eachone);
                        left++;
                        right--;
                    }else if(nums[left] + nums[right] < -nums[i]){
                        left++;
                    }else{
                        right--;
                    }
                }
            }
        }
        //res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};