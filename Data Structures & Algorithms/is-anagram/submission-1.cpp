class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(auto i:s) mp1[i]++;
        for(auto i:t) mp2[i]++;
        for(auto [x,y]:mp1){
            if(mp2[x]!=y) return 0;
        }
        for(auto [x,y]:mp2){
            if(mp1[x]!=y) return 0;
        }
        return 1;
    }
};
