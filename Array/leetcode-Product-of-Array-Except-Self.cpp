//leetcode
//Product of Array Except Self
//Medium
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        if(n == 0){
            return res;
        }
        vector<int> tmpBegin(n);
        tmpBegin[0] = 1;
        vector<int> tmpEnd(n);
        tmpEnd[0] = 1;
        for(int i = 1;i<n;++i){
            tmpBegin[i]=tmpBegin[i-1]*nums[i-1];
            tmpEnd[i]=tmpEnd[i-1]*nums[n-i];
        }
        for(int i = 0;i<n;++i){
            res[i]=tmpBegin[i]*tmpEnd[n-i-1];
        }
        return res;
    }
};