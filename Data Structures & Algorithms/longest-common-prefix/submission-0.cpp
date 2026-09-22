class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.size()==1) return s[0];
        sort(s.begin(),s.end());
        int n = s.size();
        string s1 = s[0];
        string s2 = s[n-1];
        string ans;
        for(int i=0;i<min(s1.size(),s2.size());i++){
            if(s1[i]==s2[i]) ans+=s1[i];
            else break;
        }
        return ans;
    }
};