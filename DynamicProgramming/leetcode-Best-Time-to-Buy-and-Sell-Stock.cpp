//leetcode
//Best Time to Buy and Sell Stock
//Medium
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0){
            return 0;
        }
        int min_price = INT_MAX;
        int max_price = 0;
        for(int i = 0;i<n;i++){
            min_price = min(min_price,prices[i]);
            max_price = max(max_price,prices[i]-min_price);
        }
        return max_price;
    }
};