class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans=0;
        int cost=p[0];
        for(int i=1;i<p.size();i++){
            ans = max(ans,p[i]-cost);
            cost = min(cost,p[i]);
        }
        return ans;
    }
};
