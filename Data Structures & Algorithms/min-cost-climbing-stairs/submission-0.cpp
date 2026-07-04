class Solution {
private:
    int solve(int i, vector<int>&cost, vector<int>&dp){
        if(i<=1) return 0;
        if(dp[i] != -1) return dp[i];
        int case1 = cost[i-1] + solve(i-1, cost, dp);
        int case2 = cost[i-2] + solve(i-2, cost, dp);
        return dp[i] = min(case1, case2);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1, -1);
        return solve(n, cost, dp);
       
    }
};
