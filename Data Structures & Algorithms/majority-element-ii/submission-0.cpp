class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1 = -1;
        int el2 = -1;
        int ct1 = 0;
        int ct2 = 0;

        for(auto i : nums) {
            if(i == el1) {
                ct1++;
            }
            else if(i == el2) {
                ct2++;
            }
            else if(ct1 == 0) {
                el1 = i;
                ct1 = 1;
            }
            else if(ct2 == 0) {
                el2 = i;
                ct2 = 1;
            }
            else {
                ct1--;
                ct2--;
            }
        }

        ct1 = 0;
        ct2 = 0;

        for(auto i : nums) {
            if(i == el1) ct1++;
            else if(i == el2) ct2++;
        }

        vector<int> ans;

        if(ct1 > nums.size() / 3)
            ans.push_back(el1);

        if(ct2 > nums.size() / 3)
            ans.push_back(el2);

        return ans;
    }
};