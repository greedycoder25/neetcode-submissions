class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;

        int j = 0;
        int ans = 0;
        int n = s.size();

        for(int i = 0; i < n; i++) {
            if(mp.find(s[i]) != mp.end()) {
                j = max(j, mp[s[i]] + 1);
            }

            mp[s[i]] = i;

            ans = max(ans, i - j + 1);
        }

        return ans;
    }
};