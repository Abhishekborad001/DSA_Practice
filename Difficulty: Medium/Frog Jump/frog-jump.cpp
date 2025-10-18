class Solution {
  public:
    int solve(int n, vector<int>& height, vector<int>&dp){
        if(n==0) return 0;
        if(dp[n] != -1) return dp[n];
        
        int two = INT_MAX;
        int one = solve(n-1, height, dp) + abs(height[n] - height[n-1]);
        
        if(n>1) {
            two = solve(n-2, height, dp) + abs(height[n] - height[n-2]);
            
        }
        
        return dp[n] = min(one, two);
    }
    int minCost(vector<int>& height) {
        int n=height.size();
        vector<int>dp(n, -1);
        return solve(n-1, height, dp);
        
        
    }
};