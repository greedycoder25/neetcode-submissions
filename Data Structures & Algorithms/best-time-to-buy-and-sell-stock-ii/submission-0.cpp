class Solution {
public:
    int help(int i,int h,vector<int>&pr,vector<vector<int>>&dp){
        if(i==pr.size()) return 0;
        if(dp[i][h]!=-1) return dp[i][h];
        int b=0;
        if(h==0){
            b = -pr[i]+help(i+1,!h,pr,dp);
        }
        int s=0;
        if(h==1) s = pr[i]+help(i+1,!h,pr,dp);
        int nt = help(i+1,h,pr,dp);
        return dp[i][h] = max({b,s,nt});
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+1,vector<int>(2,-1));
        return help(0,0,prices,dp);
    }
};