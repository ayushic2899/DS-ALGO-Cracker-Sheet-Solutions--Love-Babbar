Example 1:

Input:N = 3
Output: 4
Explanation:
{1}, {2}, {3} : All single
{1}, {2,3} : 2 and 3 paired but 1 is single.
{1,2}, {3} : 1 and 2 are paired but 3 is single.
{1,3}, {2} : 1 and 3 are paired but 2 is single.
Note that {1,2} and {2,1} are considered same.
  
  ``````


class Solution
{
public:
    int MOD=1000000007;
    long long int func(int n,long long int dp[]){
        if(n<=2){
            return n;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        long long int a=(((n-1)%MOD)*(func(n-2,dp)%MOD))%MOD;
        long long int b=func(n-1,dp)%MOD;
        return dp[n] = a+b;
    }
    int countFriendsPairings(int n) 
    { 
        // code here
        long long int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return func(n,dp)%MOD;
    }
};    
  
