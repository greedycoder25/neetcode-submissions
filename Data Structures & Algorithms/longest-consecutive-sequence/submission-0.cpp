class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;

        for(auto x : nums)
            mp.insert(x);

        int ans = 0;

        for(auto x : mp) {
            if(mp.find(x - 1) == mp.end()) {
                int curr = x;
                int cnt = 1;

                while(mp.find(curr + 1) != mp.end()) {
                    curr++;
                    cnt++;
                }

                ans = max(ans, cnt);
            }
        }

        return ans;
    }
};