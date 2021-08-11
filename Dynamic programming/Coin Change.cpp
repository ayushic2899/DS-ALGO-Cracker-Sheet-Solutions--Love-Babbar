link-https://leetcode.com/problems/coin-change/

`````

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int m=coins.size();
        int t[m+1][amount+1];
          for(int i = 0; i <= m; i++)
          {
            for(int j = 0; j <= amount; j++)
            {
              if(j==0)
                    t[i][j]=0; 
              if(i==0)
                  t[i][j]=INT_MAX-1;
              
              if(i==1)
				if(j%coins[0]==0)
					t[i][j]=j/coins[0];
				else
					t[i][j]=INT_MAX-1;
            }
          }
        for(int i = 2; i <= m; i++)
        {
            for(int j = 1; j <= amount; j++)
            {
                if(coins[i-1]<=j){
                    t[i][j]=min(1 + t[i][j - coins[i - 1]], t[i - 1][j]);
                }
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        
        if(t[m][amount]>amount){
            return -1;
        }
        return t[m][amount];
    }
};
 
 
      
        
        
    
