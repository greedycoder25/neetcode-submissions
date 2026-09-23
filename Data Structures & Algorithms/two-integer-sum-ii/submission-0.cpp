class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int s = nums[i]+nums[j];
            if(s<t) i++;
            else if(s>t) j--;
            else return {i+1,j+1};
        }
        return {-1,-1};
    }
};
