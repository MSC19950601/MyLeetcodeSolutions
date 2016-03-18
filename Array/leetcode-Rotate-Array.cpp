//leetcode
//Rotate Array
//easy
class Solution {
public:
    void rotate(vector<int>& nums, int k) {if (!nums.empty()){
			k%=nums.size();
			if(k==0)
				return;
			else{
				std::reverse(nums.begin(),nums.end());
				std::reverse(nums.begin(),nums.begin()+k);
				std::reverse(nums.begin()+k,nums.end());

			}
		}
    }
};