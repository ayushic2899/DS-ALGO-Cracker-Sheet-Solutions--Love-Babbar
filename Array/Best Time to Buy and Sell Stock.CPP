LINK-https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
  
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
  
  ``````````

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mino=INT_MAX;
        int maxo= 0;
        for(int i=0;i<prices.size();i++){
            mino=min(mino,prices[i]);
            maxo=max(maxo,prices[i]-mino);
        }
        return maxo;
    }
};
