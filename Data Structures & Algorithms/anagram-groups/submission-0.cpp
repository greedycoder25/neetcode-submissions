class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string, vector<string>> maps;

        for(int i=0;i<s.size();i++){
            string s1 = s[i];
            sort(s1.begin(),s1.end());
            maps[s1].push_back(s[i]);
        }
        vector<vector<string>> ans;
        for(auto [x,y]:maps) ans.push_back(y);
        return ans;

    }
};
