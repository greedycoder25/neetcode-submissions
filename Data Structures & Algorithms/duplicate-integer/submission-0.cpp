class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            if(mp.count(i)) return 1;
            mp[i]++;
        }
        return 0;
    }
};