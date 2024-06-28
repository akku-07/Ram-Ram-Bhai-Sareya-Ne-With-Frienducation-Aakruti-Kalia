class Solution {
public:

    int f(int i,int n,int buy,vector<int> &prices,vector<vector<int>> &dp){
        if(i==n) return 0;

        if(dp[i][buy]!=-1) return dp[i][buy];
        
        if(buy){
            int take=-prices[i]+f(i+1,n,0,prices,dp);
            int nottake=f(i+1,n,1,prices,dp);
            return dp[i][buy]=max(take,nottake);
        }

        else{
            int take=prices[i]+f(i+1,n,1,prices,dp);
            int nottake=f(i+1,n,0,prices,dp);
            return dp[i][buy]=max(take,nottake);
        }
    }

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));

        return f(0,n,1,prices,dp);
    }
};