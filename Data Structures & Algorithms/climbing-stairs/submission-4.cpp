class Solution {
private:
    int solve(int i, vector<int>&dp){
        if(i<=2) return i;
        if(dp[i] != -1) return dp[i];
        dp[i]= solve(i-1 , dp) + solve(i-2, dp);
        return dp[i];
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1, -1);
        return solve(n, dp);
 
        
    }
};
