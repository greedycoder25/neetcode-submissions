class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=nums[0];
        int ct=0;
        for(auto i:nums){
            if(i==el) ct++;
            else{
                ct--;
                if(ct<0) el = i,ct=0;
            }
        }
        return el;
    }
};