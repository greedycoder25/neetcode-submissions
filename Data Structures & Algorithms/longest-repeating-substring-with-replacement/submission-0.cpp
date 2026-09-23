class Solution {
public:
    int characterReplacement(string s, int k) {
        int ct=0;//max freq count
        int ans=0;
        int j=0;
        int n = s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            ct = max(ct,mp[s[i]]);
            while(i-j+1-ct>k){
                mp[s[j]]--;
                j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};
